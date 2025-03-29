#ifndef DEPOSITDIALOG_H
#define DEPOSITDIALOG_H

#include <QDialog>

namespace Ui {
class DepositDialog;
}

class DepositDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DepositDialog(QWidget *parent = nullptr);
    ~DepositDialog();

    double getDepositAmount() const; // Function to get the entered amount

private slots:
    void on_deposit_confirmation_btn_clicked();

private:
    Ui::DepositDialog *ui;
    double depositAmount;
};

#endif // DEPOSITDIALOG_H
