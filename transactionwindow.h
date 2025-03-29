#ifndef TRANSACTIONWINDOW_H
#define TRANSACTIONWINDOW_H

#include <QMainWindow>


namespace Ui {
class TransactionWindow;
}

class TransactionWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TransactionWindow(const QString &email, QWidget *parent = nullptr);
    ~TransactionWindow();

private:
    Ui::TransactionWindow *ui;
    QString userEmail;
    void loadTransactions(const QString &email); // Function to load transactions
};

#endif // TRANSACTIONWINDOW_H
