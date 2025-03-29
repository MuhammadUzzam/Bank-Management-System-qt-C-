#include "transactionwindow.h"
#include "ui_transactionwindow.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

TransactionWindow::TransactionWindow(const QString &email, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TransactionWindow), userEmail(email) // / This stores user email.
{
    ui->setupUi(this);
    loadTransactions(email); // Load transactions when Window opens
}

TransactionWindow::~TransactionWindow()
{
    delete ui;
}

void TransactionWindow::loadTransactions(const QString &email)
{
    QSqlQuery query;
    query.prepare("SELECT type, amount, date FROM transactions WHERE user_email = :email");
    query.bindValue(":email", email);

    if (!query.exec()) {
        qDebug() << "Transaction query failed: " << query.lastError().text();
        return;
    }

    ui->transaction_table->setRowCount(0); // Clear table before inserting new data
    int row = 0;

    while (query.next()) {
        ui->transaction_table->insertRow(row);

        ui->transaction_table->setItem(row, 0, new QTableWidgetItem(query.value(0).toString())); // Type
        ui->transaction_table->setItem(row, 1, new QTableWidgetItem(QString::number(query.value(1).toDouble(), 'f', 2))); // Amount
        ui->transaction_table->setItem(row, 2, new QTableWidgetItem(query.value(2).toString())); // Date

        row++;
    }

    if (row == 0) {
        qDebug() << "No transactions found for user: " << userEmail;
    }
}
