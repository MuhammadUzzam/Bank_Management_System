#include "depositdialog.h"
#include "ui_depositdialog.h"
#include <QMessageBox>
DepositDialog::DepositDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DepositDialog)
{
    ui->setupUi(this);
}
DepositDialog::~DepositDialog()
{
    delete ui;
}
void DepositDialog::on_deposit_confirmation_btn_clicked()
{
    bool ok;
    double amount = ui->amount_input->text().toDouble(&ok);

    if (amount < 1000) {
        QMessageBox::warning(this, "Invalid Amount", "Please enter an amount atleast 1000 PKR.");
        return; // Don't close the dialog
    }
    depositAmount = amount; // Store valid amount
    accept(); // Close dialog and return success
}
double DepositDialog::getDepositAmount() const
{
    return depositAmount;
}
