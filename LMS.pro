QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addbookdialog.cpp \
    admindashboard.cpp \
    bookdialog.cpp \
    dashboard.cpp \
    issuedialog.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    returnbookdialog.cpp \
    signup.cpp \
    startwidget.cpp \
    student.cpp

HEADERS += \
    addbookdialog.h \
    admindashboard.h \
    bookdialog.h \
    dashboard.h \
    index.h \
    issuedialog.h \
    login.h \
    mainwindow.h \
    returnbookdialog.h \
    signup.h \
    startwidget.h \
    student.h

FORMS += \
    addbookdialog.ui \
    admindashboard.ui \
    bookdialog.ui \
    dashboard.ui \
    issuedialog.ui \
    login.ui \
    mainwindow.ui \
    returnbookdialog.ui \
    signup.ui \
    startwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
