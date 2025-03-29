/********************************************************************************
** Form generated from reading UI file 'centralwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CENTRALWINDOW_H
#define UI_CENTRALWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Centralwindow
{
public:
    QWidget *centralwidget;
    QLabel *label_13;
    QPushButton *depositbtn;
    QPushButton *withdrawbtn;
    QPushButton *transferbtn;
    QPushButton *transactionbtn;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_11;
    QLabel *label_15;
    QLabel *label_7;
    QLabel *label_16;
    QLabel *username_label;
    QLabel *email_label;
    QLabel *account_no_label;
    QLabel *acc_type_label;
    QLabel *balance_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Centralwindow)
    {
        if (Centralwindow->objectName().isEmpty())
            Centralwindow->setObjectName("Centralwindow");
        Centralwindow->resize(723, 570);
        Centralwindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Centralwindow);
        centralwidget->setObjectName("centralwidget");
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(600, 370, 21, 21));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/wmremove-transformed.png")));
        label_13->setScaledContents(true);
        depositbtn = new QPushButton(centralwidget);
        depositbtn->setObjectName("depositbtn");
        depositbtn->setGeometry(QRect(260, 360, 151, 41));
        depositbtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 12pt \"Microsoft Sans Serif\";\n"
"background-color:#2b547d;\n"
"color:white;\n"
"border-radius:20px;\n"
"padding:7px 14px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(41, 128, 185);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(31, 97, 141);\n"
"}"));
        withdrawbtn = new QPushButton(centralwidget);
        withdrawbtn->setObjectName("withdrawbtn");
        withdrawbtn->setGeometry(QRect(260, 420, 151, 41));
        withdrawbtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 12pt \"Microsoft Sans Serif\";\n"
"background-color:#2b547d;\n"
"color:white;\n"
"border-radius:20px;\n"
"padding:7px 14px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(41, 128, 185);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(31, 97, 141);\n"
"}"));
        transferbtn = new QPushButton(centralwidget);
        transferbtn->setObjectName("transferbtn");
        transferbtn->setGeometry(QRect(460, 360, 171, 41));
        transferbtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 12pt \"Microsoft Sans Serif\";\n"
"background-color:#2b547d;\n"
"color:white;\n"
"border-radius:20px;\n"
"padding:7px 14px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(41, 128, 185);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(31, 97, 141);\n"
"}"));
        transactionbtn = new QPushButton(centralwidget);
        transactionbtn->setObjectName("transactionbtn");
        transactionbtn->setGeometry(QRect(460, 420, 171, 41));
        transactionbtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 12pt \"Microsoft Sans Serif\";\n"
"background-color:#2b547d;\n"
"color:white;\n"
"border-radius:20px;\n"
"padding:7px 14px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(41, 128, 185);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(31, 97, 141);\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 50, 281, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:white;\n"
"font: 700 20pt \"Arial\";\n"
"color:#2b547d;}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, -9, 731, 541));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:rgb(199, 201, 213);\n"
"}"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(180, 40, 511, 451));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 40, 211, 451));
        label_3->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color:#2b547d;"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(640, 0, 91, 91));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:#2b547d;\n"
"}"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(40, 180, 191, 121));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/wmremove-transformed.png")));
        label_11->setScaledContents(true);
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(660, 20, 51, 51));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/wmremove-transformed.png")));
        label_15->setScaledContents(true);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(-10, 430, 91, 101));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:#2b547d;\n"
"}"));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 460, 51, 51));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/wmremove-transformed.png")));
        label_16->setScaledContents(true);
        username_label = new QLabel(centralwidget);
        username_label->setObjectName("username_label");
        username_label->setGeometry(QRect(260, 90, 401, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        username_label->setFont(font1);
        username_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 14pt \"Microsoft Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"}\n"
"QLabel:hover {\n"
"    border: 2px solid rgb(0, 120, 215); /* Light blue */\n"
"	background-color: rgb(240, 248, 255);\n"
"}\n"
"\n"
"/* Change border and background when focused (clicked) */\n"
"QLabel:focus {\n"
"    border: 2px solid rgb(0, 150, 255); /* Brighter blue */\n"
"    background-color: rgb(230, 247, 255); /* Light blue background */\n"
"}\n"
""));
        email_label = new QLabel(centralwidget);
        email_label->setObjectName("email_label");
        email_label->setGeometry(QRect(260, 140, 401, 41));
        email_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 14pt \"Microsoft Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"}\n"
"QLabel:hover {\n"
"    border: 2px solid rgb(0, 120, 215); /* Light blue */\n"
"	background-color: rgb(240, 248, 255);\n"
"}\n"
"\n"
"/* Change border and background when focused (clicked) */\n"
"QLabel:focus {\n"
"    border: 2px solid rgb(0, 150, 255); /* Brighter blue */\n"
"    background-color: rgb(230, 247, 255); /* Light blue background */\n"
"}\n"
""));
        account_no_label = new QLabel(centralwidget);
        account_no_label->setObjectName("account_no_label");
        account_no_label->setGeometry(QRect(260, 190, 401, 41));
        account_no_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 14pt \"Microsoft Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"}\n"
"QLabel:hover {\n"
"    border: 2px solid rgb(0, 120, 215); /* Light blue */\n"
"	background-color: rgb(240, 248, 255);\n"
"}\n"
"\n"
"/* Change border and background when focused (clicked) */\n"
"QLabel:focus {\n"
"    border: 2px solid rgb(0, 150, 255); /* Brighter blue */\n"
"    background-color: rgb(230, 247, 255); /* Light blue background */\n"
"}\n"
""));
        acc_type_label = new QLabel(centralwidget);
        acc_type_label->setObjectName("acc_type_label");
        acc_type_label->setGeometry(QRect(260, 240, 401, 41));
        acc_type_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 14pt \"Microsoft Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"}\n"
"QLabel:hover {\n"
"    border: 2px solid rgb(0, 120, 215); /* Light blue */\n"
"	background-color: rgb(240, 248, 255);\n"
"}\n"
"\n"
"/* Change border and background when focused (clicked) */\n"
"QLabel:focus {\n"
"    border: 2px solid rgb(0, 150, 255); /* Brighter blue */\n"
"    background-color: rgb(230, 247, 255); /* Light blue background */\n"
"}\n"
""));
        balance_label = new QLabel(centralwidget);
        balance_label->setObjectName("balance_label");
        balance_label->setGeometry(QRect(260, 290, 401, 41));
        balance_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 14pt \"Microsoft Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"}\n"
"QLabel:hover {\n"
"    border: 2px solid rgb(0, 120, 215); /* Light blue */\n"
"	background-color: rgb(240, 248, 255);\n"
"}\n"
"\n"
"/* Change border and background when focused (clicked) */\n"
"QLabel:focus {\n"
"    border: 2px solid rgb(0, 150, 255); /* Brighter blue */\n"
"    background-color: rgb(230, 247, 255); /* Light blue background */\n"
"}\n"
""));
        Centralwindow->setCentralWidget(centralwidget);
        label_2->raise();
        label_13->raise();
        label_5->raise();
        label->raise();
        label_3->raise();
        label_11->raise();
        depositbtn->raise();
        withdrawbtn->raise();
        transferbtn->raise();
        transactionbtn->raise();
        label_6->raise();
        label_15->raise();
        label_7->raise();
        label_16->raise();
        username_label->raise();
        email_label->raise();
        account_no_label->raise();
        acc_type_label->raise();
        balance_label->raise();
        menubar = new QMenuBar(Centralwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 723, 21));
        Centralwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(Centralwindow);
        statusbar->setObjectName("statusbar");
        Centralwindow->setStatusBar(statusbar);

        retranslateUi(Centralwindow);

        QMetaObject::connectSlotsByName(Centralwindow);
    } // setupUi

    void retranslateUi(QMainWindow *Centralwindow)
    {
        Centralwindow->setWindowTitle(QCoreApplication::translate("Centralwindow", "Account Details", nullptr));
        label_13->setText(QString());
        depositbtn->setText(QCoreApplication::translate("Centralwindow", "deposit", nullptr));
        withdrawbtn->setText(QCoreApplication::translate("Centralwindow", "withdraw", nullptr));
        transferbtn->setText(QCoreApplication::translate("Centralwindow", "transfer Money", nullptr));
        transactionbtn->setText(QCoreApplication::translate("Centralwindow", "transaction history", nullptr));
        label->setText(QCoreApplication::translate("Centralwindow", " ACCOUNT DETAILS", nullptr));
        label_2->setText(QString());
        label_5->setText(QString());
        label_3->setText(QString());
        label_6->setText(QString());
        label_11->setText(QString());
        label_15->setText(QString());
        label_7->setText(QString());
        label_16->setText(QString());
        username_label->setText(QCoreApplication::translate("Centralwindow", "Username: ", nullptr));
        email_label->setText(QCoreApplication::translate("Centralwindow", "Email: ", nullptr));
        account_no_label->setText(QCoreApplication::translate("Centralwindow", "Account Number: ", nullptr));
        acc_type_label->setText(QCoreApplication::translate("Centralwindow", "Account Type: ", nullptr));
        balance_label->setText(QCoreApplication::translate("Centralwindow", "Initial Balance: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Centralwindow: public Ui_Centralwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CENTRALWINDOW_H
