// banking_system is the name of db
#include "mainwindowofbank.h"
#include "ui_mainwindowofbank.h"
#include <QString>
#include <QMessageBox>
// Include sql header files
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
// Include for debugging
#include <QDebug>
MainWindowofBANK::MainWindowofBANK(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowofBANK)
{
    ui->setupUi(this);
    // Avoid adding a duplicate database connection
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("my_banking_system"); // ye DSN name hai jo abhi banaya
    if(db.open()) {
        qDebug() << "Connected to MySQL via ODBC!";
    } else {
        qDebug() << "Error:" << db.lastError().text();
    }
}
MainWindowofBANK::~MainWindowofBANK()
{
    delete ui;
}
void MainWindowofBANK::on_signup_btn_clicked()
{
    close();
    sign = new signupwindow(this);
    sign->show();
}
void MainWindowofBANK::on_login_btn_clicked()
{
    QString email = ui->gmail_input->text();
    QString pin = ui->password_input->text();
    QString errorMsg;
    // Neeche just fancy way hai error show krane ka
    if (email.isEmpty()) errorMsg += "Email, ";
    if (pin.isEmpty()) errorMsg += "Password, ";
    if (!errorMsg.isEmpty()) {
        errorMsg.chop(2); // Remove last comma and space
        QMessageBox::critical(this, "Logic Error", "Please enter " + errorMsg + ".");
        return;
    }
    // Ensure the database is open before executing queries
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Unable to connect to database.");
        qDebug() << "Database Error:" << db.lastError().text();
        return;
    }
    QSqlQuery query;
    query.prepare(
        "SELECT c.first_name AS first_name, c.last_name AS last_name, c.email AS email, "
        "a.account_type AS account_type, a.balance AS balance, a.account_number AS account_number "
        "FROM customer c "
        "JOIN account a ON c.customer_id = a.customer_id "
        "WHERE c.email = :email AND c.password = :pin"
        );
    query.bindValue(":email", email);
    query.bindValue(":pin", pin);
    if(!query.exec()) {
        qDebug() << "Query Execution Failed:" << query.lastError().text();
        QMessageBox::critical(this, "Query Error", query.lastError().text());
        return;
    }
    if(query.next()) {
        QString retrievedName = query.value("first_name").toString() + " " + query.value("last_name").toString();
        QString retrievedEmail = query.value("email").toString();
        QString retrievedAccountType = query.value("account_type").toString();
        double retrievedBalance = query.value("balance").toDouble();
        QString retrievedAccNumber = query.value("account_number").toString();
        QMessageBox::information(this, "Login Successful", "Welcome, " + retrievedName);
        close();
        central = new Centralwindow(this);
        central->setUserDetails(retrievedName, retrievedEmail,retrievedAccountType, retrievedBalance,retrievedAccNumber);
        central->show();
    }
    else
    {
        QMessageBox::warning(this, "Login Failed", "Invalid credentials. Please try again.");
        qDebug() << "Login failed: No matching record found in the database.";
    }
}
