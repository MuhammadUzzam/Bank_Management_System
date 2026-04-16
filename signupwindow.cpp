#include "signupwindow.h"
#include "ui_signupwindow.h"
#include <QString>
#include <QMessageBox>
#include <mainwindowofbank.h>
// Three header files below for sql.
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QRandomGenerator>
#include <QRegularExpression>
signupwindow::signupwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::signupwindow)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::database();
    if (!QSqlDatabase::database().isOpen()) {
        QMessageBox::critical(this, "DB Error", "No DB connection!");
        return;
    }
}
signupwindow::~signupwindow()
{
    QSqlDatabase::database().close();
    delete ui;
}
QString signupwindow::generateAccountNumber(const QString &bankPrefix ) {
    QString accountNumber = bankPrefix;  // Islamic Bank Prefix
    // Generate random 10-digit number
    for (int i = 0; i < 10; ++i) {
        accountNumber += QString::number(QRandomGenerator::global()->bounded(0, 10));  // Generates a number between 0 and 9
    }
    return accountNumber;
}
bool signupwindow::isValidEmail(const QString &email) {
    QRegularExpression regex(R"(^[A-Za-z0-9_]+@[A-Za-z.]+\.[A-Za-z]{2,}$)");
    return regex.match(email).hasMatch();
}
void signupwindow::on_backbtn_clicked()
{
    close();
    mwb = new MainWindowofBANK(this);
    mwb->show();
}
void signupwindow::on_createbtn_clicked()
{
    bool check;

    QString accountType = ui->acctype->currentText().split(" ").first();
    QString fname = ui->firstname->text();
    QString lname = ui->lastname->text();
    QString email = ui->email->text();
    QString pin = ui->password->text();
    QString confirm_pin = ui->confirmpassword->text();
    QString cnic = ui->cnic->text();
    QString contact = ui->phone->text();
    QString street = ui->street->text();
    QString city = ui->city->text();
    QString branchid = ui->branch->text();
    QString postalcode = ui->postalcode->text();
    double initialbalance = ui->initialbalance->text().toDouble(&check);

    // validations
    if(fname.isEmpty() || lname.isEmpty() || postalcode.isEmpty() || email.isEmpty() || pin.isEmpty() || confirm_pin.isEmpty() || city.isEmpty() || cnic.isEmpty() || contact.isEmpty() || street.isEmpty()) {
        QMessageBox::critical(this, "Error", "Fields cannot be empty");
        return;
    }

    if(!check) {
        QMessageBox::critical(this, "Error", "Invalid balance");
        return;
    }

    if(pin != confirm_pin) {
        QMessageBox::critical(this, "Error", "Passwords do not match");
        return;
    }

    QSqlDatabase db = QSqlDatabase::database();

    if(!db.isOpen()) {
        QMessageBox::critical(this, "DB Error", "Database not open");
        return;
    }

    db.transaction(); // 🔥 safety

    QSqlQuery query;

    // 1️⃣ INSERT INTO CUSTOMER
    query.prepare(
        "INSERT INTO customer (first_name, last_name, email, password, cnic, phone, street, city, postal_code) "
        "VALUES (:firstname, :lastname, :email, :password, :cnic, :phone, :street, :city, :postalcode)"
    );

    query.bindValue(":firstname", fname);
    query.bindValue(":lastname", lname);
    query.bindValue(":email", email);
    query.bindValue(":password", pin);
    query.bindValue(":cnic", cnic);
    query.bindValue(":phone", contact);
    query.bindValue(":street", street);
    query.bindValue(":city", city);
    query.bindValue(":city", postalcode);


    if(!query.exec()) {
        db.rollback();
        QMessageBox::critical(this, "Error", query.lastError().text());
        return;
    }

    // 2️⃣ GET CUSTOMER ID
    int customer_id = query.lastInsertId().toInt();

    // 3️⃣ GENERATE ACCOUNT NUMBER
    QString generatedAccountNumber = generateAccountNumber("ACC");

    // 4️⃣ INSERT INTO ACCOUNT
    query.prepare(
        "INSERT INTO account (account_type, balance, account_number, customer_id, branch_id, open_date) "
        "VALUES (:type, :balance, :acc_no, :cid, :bid, CURDATE())"
    );

    query.bindValue(":type", accountType);
    query.bindValue(":balance", initialbalance);
    query.bindValue(":acc_no", generatedAccountNumber);
    query.bindValue(":cid", customer_id);
    query.bindValue(":bid", branchid);

    if(!query.exec()) {
        db.rollback();
        QMessageBox::critical(this, "Error", query.lastError().text());
        return;
    }

    db.commit(); // 🔥 success

    QMessageBox::information(this, "Success", "Account created successfully!");

    // clear UI
    ui->acctype->setCurrentIndex(0);
    ui->firstname->clear();
    ui->email->clear();
    ui->password->clear();
    ui->confirmpassword->clear();
    ui->initialbalance->clear();
    ui->cnic->clear();
    ui->phone->clear();
    ui->street->clear();
    ui->city->clear();
    ui->postalcode->clear();
    ui->branch->clear();

    // open dashboard
    central = new Centralwindow(this);
    central->setUserDetails(fname, email, accountType, initialbalance, generatedAccountNumber);
    central->show();
}
