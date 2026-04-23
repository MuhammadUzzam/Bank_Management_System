#include "transactionwindow.h"
#include "ui_transactionwindow.h"
#include <QDateTime>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
TransactionWindow::TransactionWindow(const QString &email, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TransactionWindow), userEmail(email) // This stores user email.
{
    ui->setupUi(this);
    loadTransactions(email); // Load transactions when Window opens
}
TransactionWindow::~TransactionWindow()
{
    delete ui;
}
void TransactionWindow::loadTransactions(const QString &email)
{
    QSqlQuery query;
    // STEP 1: Get account_id
    query.prepare(
        "SELECT a.account_id "
        "FROM customer c "
        "JOIN account a ON c.customer_id = a.customer_id "
        "WHERE c.email = :email"
    );
    query.bindValue(":email", email);
    if(!query.exec() || !query.next()) {
        qDebug() << "Failed to get account_id:" << query.lastError().text();
        return;
    }
    int account_id = query.value(0).toInt();
    // STEP 2: Get transactions
    query.prepare(
        "SELECT transaction_type, amount, transaction_date "
        "FROM transactions "
        "WHERE account_id = :acc_id "
        "ORDER BY transaction_date DESC"
    );
    query.bindValue(":acc_id", account_id);
    if (!query.exec()) {
        qDebug() << "Transaction query failed:" << query.lastError().text();
        return;
    }
    // STEP 3: Table setup
    ui->transaction_table->setRowCount(0);
    ui->transaction_table->setColumnCount(3);
    ui->transaction_table->setHorizontalHeaderLabels({"Type", "Amount (PKR)", "Date & Time"});
    int row = 0;
    while (query.next()) {
        ui->transaction_table->insertRow(row);
        QString type = query.value("transaction_type").toString();
        double amount = query.value("amount").toDouble();
        QString datetime = query.value("transaction_date").toDateTime().toString("dd-MM-yyyy hh:mm AP");
        // Capitalize first letter for better UI
        type[0] = type[0].toUpper();
        ui->transaction_table->setItem(row, 0, new QTableWidgetItem(type));
        ui->transaction_table->setItem(row, 1, new QTableWidgetItem(QString::number(amount, 'f', 2)));
        ui->transaction_table->setItem(row, 2, new QTableWidgetItem(datetime));
        row++;
    }
    if (row == 0) {
        qDebug() << "No transactions found for account_id:" << account_id;
    }
}
