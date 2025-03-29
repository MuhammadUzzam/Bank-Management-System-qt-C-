#include "signupwindow.h"
#include "ui_signupwindow.h"
#include <QString>
#include <QMessageBox>
#include <mainwindowofbank.h>
// Three header files below for sql.
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

signupwindow::signupwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::signupwindow)
{
    ui->setupUi(this);
    // Setup SQLite database connection
    // Use the default database connection
    QSqlDatabase db = QSqlDatabase::database();
    if(!db.isValid())
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("bankDatabase.db");
        if(!db.open())
        {
            QMessageBox::critical(this, "Database Error", "Failed to Open Database");
            return;
        }
    }
    // Create table if it does not exist
    QSqlQuery query;
    QString createTable = "CREATE TABLE IF NOT EXISTS bank ("
                          "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                          "accountType TEXT, "
                          "name TEXT, "
                          "email TEXT, "
                          "account_number TEXT, "
                          "balance REAL, "
                          "accountPIN TEXT)";
    if(!query.exec(createTable))
    {
        QMessageBox::critical(this, "Database Error", "Failed to create database." + query.lastError().text());
    }
}

signupwindow::~signupwindow()
{
    QSqlDatabase::database().close();
    delete ui;
}

void signupwindow::on_backbtn_clicked()
{
    close();
    mwb = new MainWindowofBANK(this);
    mwb->show();
}

void signupwindow::on_createbtn_clicked()
{
    bool check;
    QString accountType = ui->acctype->currentText();
    QString username = ui->username->text();
    QString email = ui->email->text();
    QString pin = ui->password->text();
    QString confirm_pin = ui->confirmpassword->text();
    QString account_no = ui->accountnumber->text();
    double initialbalance = ui->initialbalance->text().toDouble(&check);
    if(username.isEmpty()|| email.isEmpty()|| pin.isEmpty()|| confirm_pin.isEmpty()|| account_no.isEmpty()|| accountType.isEmpty())
    {
        QMessageBox::critical(this, "Empty Field", "Field(s) is(are) Empty");
        return;
    }
    if(!check)
    {
        QMessageBox::critical(this, "Input Error", "Please enter a valid number for balance");
        return;
    }
    if(pin != confirm_pin)
    {
        QMessageBox::critical(this, "Password Mismatch", "Password and Confirm Password do not match.");
        return;
    }
    // Insert data into SQL table
    QSqlQuery query;
    query.prepare("INSERT INTO bank (accountType, name, email, account_number, balance, accountPIN) VALUES (:accountType, :name, :email, :account_number, :balance, :accountPIN)");
    query.bindValue(":accountType", accountType);
    query.bindValue(":name", username);
    query.bindValue(":balance", initialbalance);
    query.bindValue(":accountPIN", pin);
    query.bindValue(":email", email);
    query.bindValue(":account_number", account_no);

    if(query.exec())
    {
        QMessageBox::information(this, "Success", "Account created successfully!");
        // Clear fields after saving
        ui->acctype->setCurrentIndex(0);
        ui->username->clear();
        ui->email->clear();
        ui->password->clear();
        ui->confirmpassword->clear();
        ui->accountnumber->clear();
        ui->initialbalance->clear();
    }
    else
    {
        QMessageBox::warning(this, "Failure", "Failed to save data." + query.lastError().text());
        return;
    }
    // Create an instance of centralWindow and pass user details using setter
    hide();
    central = new Centralwindow(this);
    central->setUserDetails(username, email, accountType, initialbalance, account_no);
    central->show();
}

