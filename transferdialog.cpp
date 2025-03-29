#include "transferdialog.h"
#include "ui_transferdialog.h"
#include <QMessageBox>

TransferDialog::TransferDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TransferDialog)
{
    ui->setupUi(this);
}

TransferDialog::~TransferDialog()
{
    delete ui;
}

void TransferDialog::on_transfer_confirmation_btn_clicked()
{
    recipientEmail = ui->email_input->text().trimmed();
    bool ok;
    transferAmount = ui->amount_input->text().toDouble(&ok);

    if (recipientEmail.isEmpty() || !ok || transferAmount <= 0)
    {
        QMessageBox::warning(this, "Invalid Input", "Please enter a valid email and amount.");
        return;
    }

    accept(); // Close dialog and proceed
}

QString TransferDialog::getRecipientEmail() const
{
    return recipientEmail;
}
double TransferDialog::getTransferAmount() const
{
    return transferAmount;
}
