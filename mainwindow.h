#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include <startwidget.h>
#include <signup.h>
#include <login.h>
#include <dashboard.h>
#include <admindashboard.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    QStackedWidget *stackedWidget ;
    startWidget *startwidget ;
    signup *signupwidget ;
    login *loginwidget ;
    dashboard *dashboardwidget ;
    admindashboard *adminwidget ;

    void signal_slots();
    void initialize_stackwidget();
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public slots:
    void changeCurrentWidget(int);

};
#endif // MAINWINDOW_H
