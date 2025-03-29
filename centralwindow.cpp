#include "centralwindow.h"
#include "ui_centralwindow.h"
#include <QMessageBox>
#include <transactionwindow.h>

// For SQL
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

Centralwindow::Centralwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Centralwindow)
{
    ui->setupUi(this);
}

Centralwindow::~Centralwindow()
{
    delete ui;
}

// Define the setter function to store user details
void Centralwindow::setUserDetails(const QString &name, const QString &email, const QString &account, const double &balance, const QString &account_no)
{
    userEmail = email;  // Store email for balance updates
    ui->username_label->setText(ui->username_label->text() + " " + name);
    ui->email_label->setText(ui->email_label->text() + " " + email);
    ui->acc_type_label->setText(ui->acc_type_label->text() + " " + account);
    ui->balance_label->setText(ui->balance_label->text() + " " + QString::number(balance));
    ui->account_no_label->setText(ui->account_no_label->text() + " " + account_no);
}



void Centralwindow::on_depositbtn_clicked()
{
    /*
    A modal dialog is a type of dialog window that blocks interaction with the main window until the user closes it.
    This is useful for collecting user input before continuing a process.
    Modal Dialog (exec())
    Modeless Dialog (show())
    */
    DepositDialog deposit_dia(this);
    if (deposit_dia.exec() == QDialog::Accepted) // Show modal deposit dialog
    {
        /*
When a modal dialog is shown using .exec(), it runs in a local event loop and waits for the user to interact.
If the user confirms (e.g., clicks OK, Deposit, Submit), we use accept(), which closes the dialog and returns QDialog::Accepted.
If the user cancels (e.g., clicks Cancel or Close), we use reject(), which returns QDialog::Rejected.
        */
        double depositAmount = deposit_dia.getDepositAmount(); // Get entered amount
        if (depositAmount > 0)
        {
            // Get current balance from the UI
            QString balanceText = ui->balance_label->text().split(" ").last();
            /*
            Current Balance: 5000
            Then:
            text().split(" ") results in ["Current", "Balance:", "5000"] .last() picks "5000"
            */
            double currentBalance = balanceText.toDouble();
            // Update the balance
            double newBalance = currentBalance + depositAmount;
            QSqlDatabase db = QSqlDatabase::database();
            if (!db.isOpen()) {
                QMessageBox::critical(this, "Database Error", "Database connection is not open.");
                return;
            }
            // Update balance in the database
            QSqlQuery query;
            query.prepare("UPDATE bank SET balance = :balance WHERE email = :email");
            query.bindValue(":balance", newBalance);
            query.bindValue(":email", userEmail);

            if (query.exec()) {
                // Update balance in the UI
                ui->balance_label->setText("Balance: " + QString::number(newBalance, 'f', 2));
                QMessageBox::information(this, "Deposit Successful", "Your balance has been updated.");
                query.prepare("INSERT INTO transactions (user_email, type, amount) VALUES (:email, :type, :amount)");
                query.bindValue(":email", userEmail);  // Replace with the actual user email variable
                query.bindValue(":type", "Deposit");
                query.bindValue(":amount", depositAmount);
                if (!query.exec()) {
                    qDebug() << "Deposit Transaction Insert Failed: " << query.lastError().text();
                }
            } else {
                QMessageBox::critical(this, "Database Error", "Failed to update balance: " + query.lastError().text());
            }
        }
    }
}


void Centralwindow::on_withdrawbtn_clicked()
{
    WithdrawDialog withdraw_dia(this);
    if (withdraw_dia.exec() == QDialog::Accepted) // Show modal deposit dialog
    {
        double withdrawAmount = withdraw_dia.getWithdrawAmount(); // Get entered amount

        // Get current balance from UI
        QString balanceText = ui->balance_label->text().split(" ").last();
        double currentBalance = balanceText.toDouble();
        if (withdrawAmount > 0 && withdrawAmount <= currentBalance)
        {
            // Calculate new balance
            double newBalance = currentBalance - withdrawAmount;
            ui->balance_label->setText("Balance: " + QString::number(newBalance, 'f', 2));

            // Database update
            QSqlQuery query;
            query.prepare("UPDATE bank SET balance = :balance WHERE email = :email");
            query.bindValue(":balance", newBalance);
            query.bindValue(":email", userEmail);  // Ensure userEmail is correctly set

            if (query.exec())
            {
                QMessageBox::information(this, "Withdrawal Successful", "Your balance has been updated.");
                QSqlQuery query;
                query.prepare("INSERT INTO transactions (user_email, type, amount) VALUES (:email, :type, :amount)");
                query.bindValue(":email", userEmail);
                query.bindValue(":type", "Withdrawal");
                query.bindValue(":amount", withdrawAmount);
                if (!query.exec()) {
                    qDebug() << "Withdrawal Transaction Insert Failed: " << query.lastError().text();
                }
            }
            else
            {
                QMessageBox::critical(this, "Database Error", "Failed to update balance: " + query.lastError().text());
            }
        }
        else
        {
            QMessageBox::warning(this, "Invalid Withdrawal", "Insufficient funds or invalid amount.");
        }
    }
}


void Centralwindow::on_transferbtn_clicked()
{
    TransferDialog transfer_dia(this);
    if (transfer_dia.exec() == QDialog::Accepted) // Open modal dialog
    {
        QString recipientEmail = transfer_dia.getRecipientEmail();
        double transferAmount = transfer_dia.getTransferAmount();

        // Get current user balance
        QString balanceText = ui->balance_label->text().split(" ").last();
        double currentBalance = balanceText.toDouble();

        if (recipientEmail == userEmail)
        {
            QMessageBox::warning(this, "Error", "You cannot transfer money to yourself.");
            return;
        }

        if (transferAmount > 0 && transferAmount <= currentBalance)
        {
            // Check if recipient exists
            QSqlQuery checkQuery;
            checkQuery.prepare("SELECT balance FROM bank WHERE email = :email");
            checkQuery.bindValue(":email", recipientEmail);

            if (checkQuery.exec() && checkQuery.next())
            {
                double recipientBalance = checkQuery.value(0).toDouble();

                // Begin transaction
                QSqlDatabase::database().transaction();

                // Deduct from sender
                QSqlQuery senderQuery;
                senderQuery.prepare("UPDATE bank SET balance = :balance WHERE email = :email");
                senderQuery.bindValue(":balance", currentBalance - transferAmount);
                senderQuery.bindValue(":email", userEmail);

                // Add to recipient
                QSqlQuery recipientQuery;
                recipientQuery.prepare("UPDATE bank SET balance = :balance WHERE email = :email");
                recipientQuery.bindValue(":balance", recipientBalance + transferAmount);
                recipientQuery.bindValue(":email", recipientEmail);

                if (senderQuery.exec() && recipientQuery.exec())
                {
                    QSqlDatabase::database().commit(); // Commit transaction
                    ui->balance_label->setText("Balance: " + QString::number(currentBalance - transferAmount, 'f', 2));
                    QMessageBox::information(this, "Transfer Successful", "Money has been transferred.");
                    QSqlQuery query;
                    // Log sender's transaction
                    query.prepare("INSERT INTO transactions (user_email, type, amount) VALUES (:email, :type, :amount)");
                    query.bindValue(":email", userEmail);  // Sender’s email
                    query.bindValue(":type", "Transfer Sent");
                    query.bindValue(":amount", -transferAmount); // Negative for sender
                    if (!query.exec()) {
                        qDebug() << "Sender's Transaction Insert Failed: " << query.lastError().text();
                    }

                    // Log recipient's transaction
                    query.prepare("INSERT INTO transactions (user_email, type, amount) VALUES (:email, :type, :amount)");
                    query.bindValue(":email", recipientEmail);  // Receiver’s email
                    query.bindValue(":type", "Transfer Received");
                    query.bindValue(":amount", transferAmount); // Positive for recipient
                    if (!query.exec()) {
                        qDebug() << "Recipient's Transaction Insert Failed: " << query.lastError().text();
                    }
                }
                else
                {
                    QSqlDatabase::database().rollback(); // Rollback if failed
                    QMessageBox::critical(this, "Transfer Failed", "Database error: " + senderQuery.lastError().text());
                }
            }
            else
            {
                QMessageBox::warning(this, "Error", "Recipient email not found.");
            }
        }
        else
        {
            QMessageBox::warning(this, "Invalid Transfer", "Insufficient funds or invalid amount.");
        }
    }
}

void Centralwindow::on_transactionbtn_clicked()
{
    transaction_win = new TransactionWindow(userEmail, this);
    transaction_win->show();
}

