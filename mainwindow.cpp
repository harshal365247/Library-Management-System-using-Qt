#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStackedWidget>
#include <startwidget.h>
#include <index.h>
#include <signup.h>
#include <QDesktopWidget>
#include <QDebug>
#include <QGuiApplication>
#include <QScreen>
#include <QRect>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    stackedWidget = new QStackedWidget(this);

    startwidget = new startWidget(this);
    signupwidget = new signup(this);
    loginwidget = new login(this);
    dashboardwidget = new dashboard(this);
    adminwidget = new admindashboard(this);

    initialize_stackwidget();
    signal_slots();


    this->setCentralWidget(stackedWidget);
    stackedWidget->setCurrentIndex(START_WIDGET);

    this->setWindowTitle("Library Management System");

}

void MainWindow::signal_slots()
{
    connect(this->startwidget, SIGNAL(setCurrentWidget(int)), this, SLOT(changeCurrentWidget(int)));
    connect(this->signupwidget, SIGNAL(setCurrentWidget(int)), this, SLOT(changeCurrentWidget(int)));
    connect(this->loginwidget, SIGNAL(setCurrentWidget(int)), this, SLOT(changeCurrentWidget(int)));
    connect(this->loginwidget, SIGNAL(loginSuccessful(QString,QString,QString)), this->dashboardwidget, SLOT(setStudentData(QString,QString,QString)));
    connect(this->dashboardwidget, SIGNAL(setCurrentWidget(int)), this, SLOT(changeCurrentWidget(int)));
    connect(this->adminwidget, SIGNAL(setCurrentWidget(int)), this, SLOT(changeCurrentWidget(int)));
    connect(this->loginwidget, SIGNAL(passStudentID(int)), this->dashboardwidget, SLOT(receiveStduentID(int)));
}

void MainWindow::initialize_stackwidget()
{
    stackedWidget->addWidget(startwidget);
    stackedWidget->addWidget(signupwidget);
    stackedWidget->addWidget(loginwidget);
    stackedWidget->addWidget(dashboardwidget);
    stackedWidget->addWidget(adminwidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeCurrentWidget(int index){
    this->stackedWidget->setCurrentIndex(index);
}


