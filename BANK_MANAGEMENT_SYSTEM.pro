QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    centralwindow.cpp \
    depositdialog.cpp \
    main.cpp \
    mainwindowofbank.cpp \
    signupwindow.cpp \
    transactionwindow.cpp \
    transferdialog.cpp \
    withdrawdialog.cpp

HEADERS += \
    centralwindow.h \
    depositdialog.h \
    mainwindowofbank.h \
    signupwindow.h \
    transactionwindow.h \
    transferdialog.h \
    withdrawdialog.h

FORMS += \
    centralwindow.ui \
    depositdialog.ui \
    mainwindowofbank.ui \
    signupwindow.ui \
    transactionwindow.ui \
    transferdialog.ui \
    withdrawdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
