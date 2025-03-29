/********************************************************************************
** Form generated from reading UI file 'withdrawdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAWDIALOG_H
#define UI_WITHDRAWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WithdrawDialog
{
public:
    QLabel *label_8;
    QLabel *label_7;
    QPushButton *withdraw_confirmation_btn;
    QLineEdit *amount_input;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_11;
    QLabel *label_16;
    QLabel *label_17;

    void setupUi(QDialog *WithdrawDialog)
    {
        if (WithdrawDialog->objectName().isEmpty())
            WithdrawDialog->setObjectName("WithdrawDialog");
        WithdrawDialog->resize(484, 367);
        label_8 = new QLabel(WithdrawDialog);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(410, -10, 81, 81));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:#2b547d;\n"
"}"));
        label_7 = new QLabel(WithdrawDialog);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(-10, 300, 81, 91));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:#2b547d;\n"
"}"));
        withdraw_confirmation_btn = new QPushButton(WithdrawDialog);
        withdraw_confirmation_btn->setObjectName("withdraw_confirmation_btn");
        withdraw_confirmation_btn->setGeometry(QRect(270, 280, 80, 24));
        withdraw_confirmation_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#2b547d;\n"
"color:white;\n"
"border-radius:10px;\n"
"padding:7px 14px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(41, 128, 185);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(31, 97, 141);\n"
"}"));
        amount_input = new QLineEdit(WithdrawDialog);
        amount_input->setObjectName("amount_input");
        amount_input->setGeometry(QRect(240, 160, 191, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        font.setPointSize(12);
        amount_input->setFont(font);
        amount_input->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"border-radius:6px;\n"
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
        label_3 = new QLabel(WithdrawDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 30, 111, 301));
        label_3->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color:#2b547d;"));
        label_2 = new QLabel(WithdrawDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 160, 51, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-color: none;"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/withdraw_17765296.png")));
        label_2->setScaledContents(true);
        label_4 = new QLabel(WithdrawDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(170, 30, 261, 301));
        label_4->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color:white;"));
        label = new QLabel(WithdrawDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 50, 221, 71));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:none;\n"
"font: 700 20pt \"Arial\";\n"
"color:#2b547d;}"));
        label_11 = new QLabel(WithdrawDialog);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(70, 130, 91, 91));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/wmremove-transformed.png")));
        label_11->setScaledContents(true);
        label_16 = new QLabel(WithdrawDialog);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 310, 51, 51));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/wmremove-transformed.png")));
        label_16->setScaledContents(true);
        label_17 = new QLabel(WithdrawDialog);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(420, 10, 51, 51));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/wmremove-transformed.png")));
        label_17->setScaledContents(true);
        label_3->raise();
        label_4->raise();
        label_8->raise();
        label_7->raise();
        withdraw_confirmation_btn->raise();
        amount_input->raise();
        label->raise();
        label_2->raise();
        label_11->raise();
        label_16->raise();
        label_17->raise();

        retranslateUi(WithdrawDialog);

        QMetaObject::connectSlotsByName(WithdrawDialog);
    } // setupUi

    void retranslateUi(QDialog *WithdrawDialog)
    {
        WithdrawDialog->setWindowTitle(QCoreApplication::translate("WithdrawDialog", "Dialog", nullptr));
        label_8->setText(QString());
        label_7->setText(QString());
        withdraw_confirmation_btn->setText(QCoreApplication::translate("WithdrawDialog", "Confirm", nullptr));
        amount_input->setPlaceholderText(QCoreApplication::translate("WithdrawDialog", "Enter Amount e.g. 6500", nullptr));
        label_3->setText(QString());
        label_2->setText(QString());
        label_4->setText(QString());
        label->setText(QCoreApplication::translate("WithdrawDialog", "Withdraw Money", nullptr));
        label_11->setText(QString());
        label_16->setText(QString());
        label_17->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WithdrawDialog: public Ui_WithdrawDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAWDIALOG_H
