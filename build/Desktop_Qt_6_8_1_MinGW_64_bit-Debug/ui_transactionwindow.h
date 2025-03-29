/********************************************************************************
** Form generated from reading UI file 'transactionwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONWINDOW_H
#define UI_TRANSACTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransactionWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QTableWidget *transaction_table;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TransactionWindow)
    {
        if (TransactionWindow->objectName().isEmpty())
            TransactionWindow->setObjectName("TransactionWindow");
        TransactionWindow->resize(723, 570);
        centralwidget = new QWidget(TransactionWindow);
        centralwidget->setObjectName("centralwidget");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 20, 361, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(25);
        font.setBold(true);
        font.setItalic(false);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:none;\n"
"font: 700 25pt \"Arial\";\n"
"color:#2b547d;}"));
        transaction_table = new QTableWidget(centralwidget);
        if (transaction_table->columnCount() < 3)
            transaction_table->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        transaction_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        transaction_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        transaction_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        transaction_table->setObjectName("transaction_table");
        transaction_table->setGeometry(QRect(0, 100, 721, 441));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        transaction_table->setFont(font1);
        transaction_table->setStyleSheet(QString::fromUtf8("QTableWidget { background-color: #f8f9fa; gridline-color: #dee2e6; font-size: 12px; }\n"
"QHeaderView::section { background-color: #007bff; color: white; padding: 5px; font-weight: bold; border: 1px solid #dee2e6; }\n"
"QTableWidget::item { padding: 5px; }\n"
"QTableWidget::item:selected { background-color: #cce5ff; }\n"
""));
        transaction_table->setAlternatingRowColors(false);
        transaction_table->setColumnCount(3);
        transaction_table->horizontalHeader()->setCascadingSectionResizes(false);
        transaction_table->horizontalHeader()->setDefaultSectionSize(200);
        transaction_table->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        transaction_table->horizontalHeader()->setStretchLastSection(true);
        transaction_table->verticalHeader()->setVisible(true);
        transaction_table->verticalHeader()->setCascadingSectionResizes(false);
        transaction_table->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        transaction_table->verticalHeader()->setStretchLastSection(false);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(610, 10, 91, 81));
        label->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/transaction.png")));
        label->setScaledContents(true);
        TransactionWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TransactionWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 723, 21));
        TransactionWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(TransactionWindow);
        statusbar->setObjectName("statusbar");
        TransactionWindow->setStatusBar(statusbar);

        retranslateUi(TransactionWindow);

        QMetaObject::connectSlotsByName(TransactionWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TransactionWindow)
    {
        TransactionWindow->setWindowTitle(QCoreApplication::translate("TransactionWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("TransactionWindow", "Transaction History", nullptr));
        QTableWidgetItem *___qtablewidgetitem = transaction_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TransactionWindow", "Transaction Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = transaction_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TransactionWindow", "Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = transaction_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TransactionWindow", "Date", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TransactionWindow: public Ui_TransactionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONWINDOW_H
