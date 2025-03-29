#ifndef MAINWINDOWOFBANK_H
#define MAINWINDOWOFBANK_H
#include <signupwindow.h>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindowofBANK;
}
QT_END_NAMESPACE

class MainWindowofBANK : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowofBANK(QWidget *parent = nullptr);
    ~MainWindowofBANK();

private slots:
    void on_signup_btn_clicked();

    void on_login_btn_clicked();

private:
    Ui::MainWindowofBANK *ui;
    signupwindow *sign;
    Centralwindow *central;
};
#endif // MAINWINDOWOFBANK_H
