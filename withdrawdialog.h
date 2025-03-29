#ifndef WITHDRAWDIALOG_H
#define WITHDRAWDIALOG_H

#include <QDialog>

namespace Ui {
class WithdrawDialog;
}

class WithdrawDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WithdrawDialog(QWidget *parent = nullptr);
    ~WithdrawDialog();

    double getWithdrawAmount() const; // Function to get the entered amount

private slots:
    void on_withdraw_confirmation_btn_clicked();

private:
    Ui::WithdrawDialog *ui;
    double withdrawAmount;
};

#endif // WITHDRAWDIALOG_H
