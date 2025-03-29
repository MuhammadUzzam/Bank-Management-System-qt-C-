#ifndef CENTRALWINDOW_H
#define CENTRALWINDOW_H

#include <QString>
#include <QMainWindow>
#include <depositdialog.h>
#include <withdrawdialog.h>
#include <transferdialog.h>
#include <transactionwindow.h>

namespace Ui {
class Centralwindow;
}

class Centralwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit Centralwindow(QWidget *parent = nullptr);
    ~Centralwindow();

    // Setter function to set user details.
    void setUserDetails(const QString &name, const QString &email, const QString &account, const double &balance, const QString &account_no);


private slots:
    void on_depositbtn_clicked();
    void on_withdrawbtn_clicked();
    void on_transferbtn_clicked();
    void on_transactionbtn_clicked();
private:
    Ui::Centralwindow *ui;
    DepositDialog *deposit_dia;
    WithdrawDialog *withdraw_dia;
    TransferDialog *transfer_dia;
    TransactionWindow *transaction_win;
    QString userEmail;
};

#endif // CENTRALWINDOW_H
