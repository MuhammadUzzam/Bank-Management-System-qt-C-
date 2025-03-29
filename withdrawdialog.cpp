#include "withdrawdialog.h"
#include "ui_withdrawdialog.h"
#include <QMessageBox>

WithdrawDialog::WithdrawDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WithdrawDialog)
{
    ui->setupUi(this);
}

WithdrawDialog::~WithdrawDialog()
{
    delete ui;
}

void WithdrawDialog::on_withdraw_confirmation_btn_clicked()
{
    bool ok;
    double amount = ui->amount_input->text().toDouble(&ok);

    if (!ok || amount <= 0)
    {
        QMessageBox::warning(this, "Invalid Input", "Please enter a valid withdrawal amount.");
        return;
    }

    withdrawAmount = amount; // Store valid amount
    accept(); // Close dialog and return success
}


double WithdrawDialog::getWithdrawAmount() const
{
    return withdrawAmount;
}

