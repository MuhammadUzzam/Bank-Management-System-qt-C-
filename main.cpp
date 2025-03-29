#include "mainwindowofbank.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindowofBANK w;
    w.show();
    return a.exec();
}

