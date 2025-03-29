#include "mainwindowofbank.h"
#include "ui_mainwindowofbank.h"
#include <QString>
#include <QMessageBox>

// Include sql header files
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>  // Include for debugging

MainWindowofBANK::MainWindowofBANK(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowofBANK)
{
    ui->setupUi(this);
    // Avoid adding a duplicate database connection
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isValid()) {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("bankDatabase.db");
    }

    if(!db.open())
    {
        QMessageBox::critical(this, "Database Error", "Failed to open database: " + db.lastError().text());
        qDebug() << "Database Error: " << db.lastError().text();
    }
}

MainWindowofBANK::~MainWindowofBANK()
{
    delete ui;
}

void MainWindowofBANK::on_signup_btn_clicked()
{
    hide();
    sign = new signupwindow(this);
    sign->show();
}

void MainWindowofBANK::on_login_btn_clicked()
{
    QString name = ui->username_input->text();
    QString email = ui->gmail_input->text();
    QString pin = ui->password_input->text();

    QString errorMsg;

    if (name.isEmpty()) errorMsg += "Username, ";
    if (email.isEmpty()) errorMsg += "Email, ";
    if (pin.isEmpty()) errorMsg += "Password, ";

    if (!errorMsg.isEmpty()) {
        errorMsg.chop(2); // Remove last comma and space
        QMessageBox::critical(this, "Logic Error", "Please enter " + errorMsg + ".");
        return;
    }
    // Ensure the database is open before executing queries
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database connection is not open.");
        qDebug() << "Database is not open.";
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT name, email, accountType, balance, account_number FROM bank WHERE name = :name AND email = :email AND accountPIN = :pin");
    query.bindValue(":name", name);
    query.bindValue(":email", email);
    query.bindValue(":pin", pin);
    if(!query.exec())  // Check if query execution was successful
    {
        qDebug() << "Query Execution Failed: " << query.lastError().text();
        QMessageBox::critical(this, "Query Error", "Failed to execute query: " + query.lastError().text());
        return;
    }
    if(query.next())  // If credentials are correct
    {
        QString retrievedName = query.value("name").toString();
        QString retrievedEmail = query.value("email").toString();
        QString retrievedAccountType = query.value("accountType").toString();
        double retrievedBalance = query.value("balance").toDouble();
        QString retrievedAccNumber = query.value("account_number").toString();

        QMessageBox::information(this, "Login Successful", "Welcome, " + retrievedName);

        // Hide current window
        hide();

        // Open central window and pass user details
        central = new Centralwindow(this);
        central->setUserDetails(retrievedName, retrievedEmail, retrievedAccountType, retrievedBalance, retrievedAccNumber);
        central->show();
    }
    else
    {
        QMessageBox::warning(this, "Login Failed", "Invalid credentials. Please try again.");
        qDebug() << "Login failed: No matching record found in the database.";
    }
}

