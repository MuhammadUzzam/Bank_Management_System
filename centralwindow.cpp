#include "centralwindow.h"
#include "ui_centralwindow.h"
#include <QMessageBox>
#include <transactionwindow.h>
// For SQL
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
Centralwindow::Centralwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Centralwindow)
{
    ui->setupUi(this);
}
Centralwindow::~Centralwindow()
{
    delete ui;
}
// Define the setter function to store user details
void Centralwindow::setUserDetails(const QString &name, const QString &email, const QString &account, const double &balance, const QString &account_no)
{
    userEmail = email;  // Store email for balance updates
    userAccountType = account;
    ui->username_label->setText(ui->username_label->text() + " " + name);
    ui->email_label->setText(ui->email_label->text() + " " + email);
    ui->acc_type_label->setText(ui->acc_type_label->text() + " " + account);
    ui->balance_label->setText(ui->balance_label->text() + " " + QString::number(balance));
    ui->account_no_label->setText(ui->account_no_label->text() + " " + account_no);
}
void Centralwindow::on_depositbtn_clicked()
{
    /*
    A modal dialog is a type of dialog window that blocks interaction with the main window until the user closes it.
    This is useful for collecting user input before continuing a process.
    Modal Dialog (exec())
    Modeless Dialog (show())
    */
    DepositDialog deposit_dia(this);
    if (deposit_dia.exec() == QDialog::Accepted) // Show modal deposit dialog
    {
        /*
When a modal dialog is shown using .exec(), it runs in a local event loop and waits for the user to interact.
If the user confirms (e.g., clicks OK, Deposit, Submit), we use accept(), which closes the dialog and returns QDialog::Accepted.
If the user cancels (e.g., clicks Cancel or Close), we use reject(), which returns QDialog::Rejected.
        */
        double depositAmount = deposit_dia.getDepositAmount(); // Get entered amount
        // Get current balance from the UI
        QString balanceText = ui->balance_label->text().split(" ").last();
        /*
        Balance: 5000
        Then:
        text().split(" ") results in ["Balance:", "5000"] .last() picks "5000"
        */
        double currentBalance = balanceText.toDouble();
        // Update the balance
        double newBalance;
        if (userAccountType.toLower().contains("saving")) {
            // Define a more realistic interest rate (e.g., 3%)
            double interestRate = 0.03;  // 3% annual interest rate for savings account

            // Calculate interest on the deposit
            double totalWithInterest = depositAmount + (depositAmount * interestRate); // Interest applied on deposit
            newBalance = currentBalance + totalWithInterest;  // Update total balance after deposit + interest

            // Inform the user about the interest applied
            QMessageBox::information(this, "Deposit with Interest", "Interest of 3% applied. Total added: " + QString::number(totalWithInterest, 'f', 2) + " PKR");
        } else {
            newBalance = currentBalance + depositAmount; // For non-saving accounts, just add the deposit amount
        }
        // Update balance in the database
        QSqlQuery query;

        // STEP 1: Get account_id from email
        query.prepare(
            "SELECT a.account_id "
            "FROM customer c "
            "JOIN account a ON c.customer_id = a.customer_id "
            "WHERE c.email = :email"
            );
        query.bindValue(":email", userEmail);
        if(!query.exec() || !query.next()) {
            QMessageBox::critical(this, "Error", "Failed to fetch account info");
            return;
        }
        int account_id = query.value(0).toInt();
        // STEP 2: Update balance in account table
        query.prepare("UPDATE account SET balance = :balance WHERE account_id = :acc_id");
        query.bindValue(":balance", newBalance);
        query.bindValue(":acc_id", account_id);
        if (query.exec())
        {
            // Update UI
            ui->balance_label->setText("Balance: " + QString::number(newBalance, 'f', 2));
            QMessageBox::information(this, "Deposit Successful",
                                     "Your balance has been updated.");
            // STEP 3: Insert into transactions table
            QSqlQuery transQuery;
            transQuery.prepare(
                "INSERT INTO transactions (transaction_type, amount, transaction_date, account_id) "
                "VALUES (:type, :amount, NOW(), :acc_id)"
            );
            transQuery.bindValue(":type", "Deposit");
            transQuery.bindValue(":amount", depositAmount);
            transQuery.bindValue(":acc_id", account_id);
            if (!transQuery.exec()) {
                qDebug() << "Transaction Insert Failed:" << transQuery.lastError().text();
            }
        }
        else
        {
            QMessageBox::critical(this, "Database Error",
                                  "Failed to update balance: " + query.lastError().text());
        }
    }
}
void Centralwindow::on_withdrawbtn_clicked()
{
    WithdrawDialog withdraw_dia(this);
    if (withdraw_dia.exec() == QDialog::Accepted)
    {
        double withdrawAmount = withdraw_dia.getWithdrawAmount();
        QString balanceText = ui->balance_label->text().split(" ").last();
        double currentBalance = balanceText.toDouble();
        if (withdrawAmount <= 0) {
            QMessageBox::warning(this, "Error", "Enter valid amount");
            return;
        }
        double fee = 25;
        if (withdrawAmount < 1000) {
            QMessageBox::warning(this, "Error", "Minimum 1000 PKR");
            return;
        }
        if ((int)withdrawAmount % 500 != 0) {
            QMessageBox::warning(this, "Error", "Multiple of 500 only");
            return;
        }
        if (withdrawAmount > 50000) {
            QMessageBox::warning(this, "Error", "Max 50000 PKR");
            return;
        }
        double total = withdrawAmount + fee;
        if (total > currentBalance) {
            QMessageBox::warning(this, "Error", "Insufficient balance");
            return;
        }
        double newBalance = currentBalance - total;
        QSqlQuery query;
        // STEP 1: Get account_id
        query.prepare(
            "SELECT a.account_id "
            "FROM customer c "
            "JOIN account a ON c.customer_id = a.customer_id "
            "WHERE c.email = :email"
        );
        query.bindValue(":email", userEmail);
        if (!query.exec() || !query.next()) {
            QMessageBox::critical(this, "Error", "Account not found");
            return;
        }
        int account_id = query.value(0).toInt();
        // STEP 2: Update balance
        query.prepare("UPDATE account SET balance = :balance WHERE account_id = :id");
        query.bindValue(":balance", newBalance);
        query.bindValue(":id", account_id);
        if (query.exec())
        {
            ui->balance_label->setText("Balance: " + QString::number(newBalance, 'f', 2));
            QMessageBox::information(this, "Success",
                                     "Withdrawal successful (Fee: 25 PKR)");
            // STEP 3: Insert transaction
            QSqlQuery transQuery;
            transQuery.prepare(
                "INSERT INTO transactions (transaction_type, amount, transaction_date, account_id) "
                "VALUES (:type, :amount, NOW(), :id)"
            );
            transQuery.bindValue(":type", "Withdraw");
            transQuery.bindValue(":amount", withdrawAmount);
            transQuery.bindValue(":id", account_id);
            if (!transQuery.exec()) {
                qDebug() << "Withdraw transaction failed:" << transQuery.lastError().text();
            }
        }
        else
        {
            QMessageBox::critical(this, "DB Error", query.lastError().text());
        }
    }
}
void Centralwindow::on_transferbtn_clicked()
{
    TransferDialog transfer_dia(this);
    if (transfer_dia.exec() == QDialog::Accepted)
    {
        QString recipientEmail = transfer_dia.getRecipientEmail();
        double transferAmount = transfer_dia.getTransferAmount();
        QString balanceText = ui->balance_label->text().split(" ").last();
        double currentBalance = balanceText.toDouble();
        // Self transfer
        if (recipientEmail == userEmail) {
            QMessageBox::warning(this, "Error", "Cannot transfer to yourself");
            return;
        }
        if (transferAmount <= 0) {
            QMessageBox::warning(this, "Error", "Invalid amount");
            return;
        }
        if (transferAmount > currentBalance) {
            QMessageBox::warning(this, "Error", "Insufficient balance");
            return;
        }
        QSqlQuery query;
        // STEP 1: Get sender account_id
        query.prepare(
            "SELECT a.account_id "
            "FROM customer c "
            "JOIN account a ON c.customer_id = a.customer_id "
            "WHERE c.email = :email"
            );
        query.bindValue(":email", userEmail);
        if (!query.exec() || !query.next()) {
            QMessageBox::critical(this, "Error", "Sender account not found");
            return;
        }
        int senderAccId = query.value(0).toInt();
        // STEP 2: Get receiver account_id + balance
        query.prepare(
            "SELECT a.account_id, a.balance "
            "FROM customer c "
            "JOIN account a ON c.customer_id = a.customer_id "
            "WHERE c.email = :email"
            );
        query.bindValue(":email", recipientEmail);
        if (!query.exec() || !query.next()) {
            QMessageBox::warning(this, "Error", "Recipient not found");
            return;
        }
        int receiverAccId = query.value(0).toInt();
        double receiverBalance = query.value(1).toDouble();
        // STEP 3: Start DB transaction
        QSqlDatabase::database().transaction();
        // STEP 4: Deduct from sender
        QSqlQuery senderQuery;
        senderQuery.prepare("UPDATE account SET balance = :balance WHERE account_id = :id");
        senderQuery.bindValue(":balance", currentBalance - transferAmount);
        senderQuery.bindValue(":id", senderAccId);
        // STEP 5: Add to receiver
        QSqlQuery receiverQuery;
        receiverQuery.prepare("UPDATE account SET balance = :balance WHERE account_id = :id");
        receiverQuery.bindValue(":balance", receiverBalance + transferAmount);
        receiverQuery.bindValue(":id", receiverAccId);
        if (senderQuery.exec() && receiverQuery.exec())
        {
            QSqlDatabase::database().commit();
            // Update UI
            ui->balance_label->setText("Balance: " +
                                       QString::number(currentBalance - transferAmount, 'f', 2));
            QMessageBox::information(this, "Success", "Transfer completed");
            // STEP 6: Log transactions
            QSqlQuery logQuery;
            // Sender log
            logQuery.prepare(
                "INSERT INTO transactions (transaction_type, amount, transaction_date, account_id) "
                "VALUES (:type, :amount, NOW(), :id)"
            );
            logQuery.bindValue(":type", "Transfer Sent");
            logQuery.bindValue(":amount", -transferAmount);
            logQuery.bindValue(":id", senderAccId);
            logQuery.exec();
            // Receiver log
            logQuery.prepare(
                "INSERT INTO transactions (transaction_type, amount, transaction_date, account_id) "
                "VALUES (:type, :amount, NOW(), :id)"
            );
            logQuery.bindValue(":type", "Transfer Received");
            logQuery.bindValue(":amount", transferAmount);
            logQuery.bindValue(":id", receiverAccId);
            logQuery.exec();
        }
        else
        {
            QSqlDatabase::database().rollback();
            QMessageBox::critical(this, "Error",
                                  "Transfer failed: " + senderQuery.lastError().text());
        }
    }
}
void Centralwindow::on_transactionbtn_clicked()
{
    transaction_win = new TransactionWindow(userEmail, this);
    transaction_win->show();
}
