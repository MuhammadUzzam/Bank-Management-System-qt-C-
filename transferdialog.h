#ifndef TRANSFERDIALOG_H
#define TRANSFERDIALOG_H

#include <QDialog>

namespace Ui {
class TransferDialog;
}

class TransferDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TransferDialog(QWidget *parent = nullptr);
    ~TransferDialog();
    QString getRecipientEmail() const;
    double getTransferAmount() const;

private slots:
    void on_transfer_confirmation_btn_clicked();

private:
    Ui::TransferDialog *ui;
    QString recipientEmail;
    double transferAmount;
};

#endif // TRANSFERDIALOG_H
