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
    if(!ok || amount<=0)
    {
        QMessageBox::warning(this, "Invalid Input", "Please enter a valid amount.");
        return;
    }

    depositAmount = amount; // Store valid amount
    accept(); // Close dialog and return success
}

double DepositDialog::getDepositAmount() const
{
    return depositAmount;
}

