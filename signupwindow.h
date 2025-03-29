#ifndef SIGNUPWINDOW_H
#define SIGNUPWINDOW_H
#include <centralwindow.h>
class MainWindowofBANK;


#include <QMainWindow>

namespace Ui {
class signupwindow;
}

class signupwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit signupwindow(QWidget *parent = nullptr);
    ~signupwindow();

private slots:

    void on_backbtn_clicked();

    void on_createbtn_clicked();

private:
    Ui::signupwindow *ui;
    Centralwindow *central;
    MainWindowofBANK *mwb;
};

#endif // SIGNUPWINDOW_H
