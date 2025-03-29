/********************************************************************************
** Form generated from reading UI file 'mainwindowofbank.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWOFBANK_H
#define UI_MAINWINDOWOFBANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowofBANK
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *signup_btn;
    QPushButton *login_btn;
    QLineEdit *username_input;
    QLineEdit *gmail_input;
    QLineEdit *password_input;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowofBANK)
    {
        if (MainWindowofBANK->objectName().isEmpty())
            MainWindowofBANK->setObjectName("MainWindowofBANK");
        MainWindowofBANK->resize(720, 562);
        MainWindowofBANK->setMinimumSize(QSize(720, 562));
        MainWindowofBANK->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:#2b547d;\n"
"}\n"
"QMessageBox QLabel {\n"
"    background-color: transparent; /* Makes text background transparent */\n"
"    color: black; /* Text color */\n"
"}"));
        centralwidget = new QWidget(MainWindowofBANK);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 731, 521));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:rgb(199, 201, 213);\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(650, 0, 81, 81));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:#2b547d;\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-10, 440, 81, 81));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:#2b547d;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 20, 201, 471));
        label_2->setStyleSheet(QString::fromUtf8("border-radius:10px;"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(180, 20, 491, 471));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(250, 40, 371, 41));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:white;\n"
"font: 700 20pt \"Arial\";\n"
"color:#2b547d;}"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(270, 90, 201, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:rgb(255, 255, 255);\n"
"	font: 12pt \"Arial\";\n"
"\n"
"color:#2b547d;}"));
        signup_btn = new QPushButton(centralwidget);
        signup_btn->setObjectName("signup_btn");
        signup_btn->setGeometry(QRect(500, 80, 111, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        signup_btn->setFont(font1);
        signup_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#3499db;\n"
"color:white;\n"
"border-radius:15px;\n"
"padding:7px 14px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(41, 128, 185);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(31, 97, 141);\n"
"}"));
        login_btn = new QPushButton(centralwidget);
        login_btn->setObjectName("login_btn");
        login_btn->setGeometry(QRect(400, 400, 101, 31));
        login_btn->setFont(font1);
        login_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#2b547d;\n"
"color:white;\n"
"border-radius:15px;\n"
"padding:7px 14px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(41, 128, 185);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(31, 97, 141);\n"
"}"));
        username_input = new QLineEdit(centralwidget);
        username_input->setObjectName("username_input");
        username_input->setGeometry(QRect(260, 160, 371, 51));
        QFont font2;
        font2.setPointSize(14);
        username_input->setFont(font2);
        username_input->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"padding-left:45px;\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid rgb(29, 61, 92);\n"
"background-color:rgb(226, 230, 235);\n"
"}\n"
"QLineEdit:focus{\n"
"border:2px solid rgb(0, 0, 119);\n"
"background-color:white;\n"
"outline:none;\n"
"}"));
        gmail_input = new QLineEdit(centralwidget);
        gmail_input->setObjectName("gmail_input");
        gmail_input->setGeometry(QRect(260, 230, 371, 51));
        gmail_input->setFont(font2);
        gmail_input->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"padding-left:45px;\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid rgb(29, 61, 92);\n"
"background-color:rgb(226, 230, 235);\n"
"}\n"
"QLineEdit:focus{\n"
"border:2px solid rgb(0, 0, 119);\n"
"background-color:white;\n"
"outline:none;\n"
"}"));
        password_input = new QLineEdit(centralwidget);
        password_input->setObjectName("password_input");
        password_input->setGeometry(QRect(260, 300, 371, 51));
        password_input->setFont(font2);
        password_input->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"padding-left:45px;\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid rgb(29, 61, 92);\n"
"background-color:rgb(226, 230, 235);\n"
"}\n"
"QLineEdit:focus{\n"
"border:2px solid rgb(0, 0, 119);\n"
"background-color:white;\n"
"outline:none;\n"
"}"));
        password_input->setEchoMode(QLineEdit::EchoMode::Password);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setEnabled(true);
        label_11->setGeometry(QRect(40, 140, 181, 151));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/wmremove-transformed.png")));
        label_11->setScaledContents(true);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 460, 51, 51));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/wmremove-transformed.png")));
        label_12->setScaledContents(true);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(660, 10, 51, 51));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/wmremove-transformed.png")));
        label_13->setScaledContents(true);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(270, 310, 31, 31));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: none;\n"
"}"));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/padlock.png")));
        label_8->setScaledContents(true);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(270, 170, 31, 31));
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: none;\n"
"}"));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/profile.png")));
        label_9->setScaledContents(true);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(270, 240, 31, 31));
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: none;\n"
"}"));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/mail.png")));
        label_10->setScaledContents(true);
        MainWindowofBANK->setCentralWidget(centralwidget);
        label->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        signup_btn->raise();
        login_btn->raise();
        password_input->raise();
        label_2->raise();
        label_11->raise();
        label_12->raise();
        username_input->raise();
        gmail_input->raise();
        label_3->raise();
        label_13->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        menubar = new QMenuBar(MainWindowofBANK);
        menubar->setObjectName("menubar");
        menubar->setEnabled(false);
        menubar->setGeometry(QRect(0, 0, 720, 21));
        MainWindowofBANK->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowofBANK);
        statusbar->setObjectName("statusbar");
        statusbar->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(statusbar->sizePolicy().hasHeightForWidth());
        statusbar->setSizePolicy(sizePolicy);
        statusbar->setMaximumSize(QSize(0, 16777215));
        statusbar->setAcceptDrops(true);
        MainWindowofBANK->setStatusBar(statusbar);

        retranslateUi(MainWindowofBANK);

        QMetaObject::connectSlotsByName(MainWindowofBANK);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowofBANK)
    {
        MainWindowofBANK->setWindowTitle(QCoreApplication::translate("MainWindowofBANK", "MainWindowofBANK", nullptr));
        label->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_2->setText(QString());
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindowofBANK", "  Welcome to Islamic Bank", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindowofBANK", "Don't Have an account yet?", nullptr));
        signup_btn->setText(QCoreApplication::translate("MainWindowofBANK", "SIGN UP", nullptr));
        login_btn->setText(QCoreApplication::translate("MainWindowofBANK", "LOG IN", nullptr));
        username_input->setText(QString());
        username_input->setPlaceholderText(QCoreApplication::translate("MainWindowofBANK", "username", nullptr));
        gmail_input->setPlaceholderText(QCoreApplication::translate("MainWindowofBANK", "gmail", nullptr));
        password_input->setPlaceholderText(QCoreApplication::translate("MainWindowofBANK", "password", nullptr));
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindowofBANK: public Ui_MainWindowofBANK {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWOFBANK_H
