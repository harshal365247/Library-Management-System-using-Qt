#include "startwidget.h"
#include "ui_startwidget.h"
#include <mainwindow.h>
#include <index.h>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QDesktopWidget>
#include <QGraphicsDropShadowEffect>

startWidget::startWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::startWidget)
{
    ui->setupUi(this);

    ui->loginButton->setIcon(QIcon("://icons/login.png"));
    ui->signupButton->setIcon(QIcon("://icons/signup.png"));

    setShadow() ;
    createBooksTable() ;
}

void startWidget::createBooksTable()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("student.db");
    QSqlDatabase::drivers();

    if(!db.open()){
        qDebug() << db.lastError() ;
        return ;
    }

    QSqlQuery query(db) ;

    query.prepare("CREATE TABLE IF NOT EXISTS books ("
                  "book_name VARCHAR(30), author VARCHAR(30), year INTEGER,"
                  "available BOOLEAN DEFAULT true, book_id INTEGER PRIMARY KEY AUTOINCREMENT )");

    if(!query.exec()){
       qDebug() << query.lastError();
       qDebug() << "Books table not created. " ;
       return ;
    }
    else{
        qDebug() << "Books table created" ;
    }

    query.prepare("CREATE TABLE IF NOT EXISTS issue_table ("
                  "issue_id INTEGER PRIMARY KEY AUTOINCREMENT, student_id INTEGER, book_id INTEGER, book_name VARCHAR(30)"
                  ", author VARCHAR(30))");
    if(!query.exec()){
        qDebug() << "issue_table not created" ;
    }

    query.prepare( " CREATE TABLE IF NOT EXISTS student("
                   "name VARCHAR(30) , password VARCHAR(30), course VARCHAR(30), branch VARCHAR(30),"
                   "student_id INTEGER PRIMARY KEY AUTOINCREMENT )");

    if(query.exec()){
        qDebug() << "Student Table created. " ;
    }
    else{
        qDebug() << "Student Table not created. "  ;
    }

    query.prepare("CREATE TABLE IF NOT EXISTS admin ("
                  "admin_id INTEGER PRIMARY KEY AUTOINCREMENT, name VARCHAR(30), designation "
                  "password VARCHAR(30)");
    return ;
}

void startWidget::setShadow()
{
    QGraphicsDropShadowEffect *shadow1 = new QGraphicsDropShadowEffect(this) ;
    shadow1->setColor(QColor(211,211,211));
    shadow1->setOffset(2);

    QGraphicsDropShadowEffect *shadow2 = new QGraphicsDropShadowEffect(this) ;
    shadow2->setColor(QColor(211,211,211));
    shadow2->setOffset(2);

    ui->loginButton->setGraphicsEffect(shadow1) ;
    ui->signupButton->setGraphicsEffect(shadow2) ;
}

startWidget::~startWidget()
{
    delete ui;
}

void startWidget::on_signupButton_clicked()
{
    emit setCurrentWidget(SIGNUP_WIDGET);
}

void startWidget::on_loginButton_clicked()
{
    emit setCurrentWidget(LOGIN_WIDGET);
}
