#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QSqlRecord>
#include "index.h"
#include <QGraphicsDropShadowEffect>

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

    QString src = "://icons/library.png";
    QPixmap pixmap(src);
    ui->logoLabel->setPixmap(pixmap);

    QGraphicsDropShadowEffect *shadow1 = new QGraphicsDropShadowEffect(this) ;
    shadow1->setColor(QColor(211,211,211));
    shadow1->setOffset(2);

    QGraphicsDropShadowEffect *shadow2 = new QGraphicsDropShadowEffect(this) ;
    shadow2->setColor(QColor(211,211,211));
    shadow2->setOffset(2);

    ui->loginButton->setGraphicsEffect(shadow1);
    ui->backButton->setGraphicsEffect(shadow2);

}

login::~login()
{
    delete ui;
}


void login::on_loginButton_clicked()
{
    QString student_id = ui->nameLineEdit->text() ;
    QString password = ui->passwordLineEdit->text() ;

    ui->nameLineEdit->clear() ;
    ui->passwordLineEdit->clear();

    if(student_id.isEmpty() || password.isEmpty()){
        QMessageBox::critical(this, "Empty", "Please enter your name and password.");
        return ;
    }

    if(student_id == "admin" && password == "admin"){
        emit setCurrentWidget(ADMIN_DASHBOARD_WIDGET) ;
        return ;
    }


    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("student.db");
    QSqlDatabase::drivers();

    if(db.open()){
        qDebug() << "Databse is open" ;
         qDebug() << db.databaseName() ;
    }
    else{
        qDebug() << "Database is not open" ;
        qDebug() << db.lastError() ;
        return ;

    }

    QSqlQuery query(db);
    query.prepare(" SELECT * FROM student WHERE student_id = :student_id");
    query.bindValue(":student_id", student_id.toInt());

    if(!query.exec()){
        qDebug() << query.lastError() ;
        return ;
    }

    query.next();

    if(query.value(4).toInt() != student_id.toInt()){
        QMessageBox::critical(this, "Error", "No such user exists. ");
        return ;
    }

    if(query.value(1).toString() == password){
        QMessageBox::information(this, "Info", "Login Successful.");
        QString name = query.value(0).toString() ;
        QString course = query.value(2).toString() ;
        QString branch = query.value(3).toString() ;


        emit setCurrentWidget(DASHBOARD_WIDGET);
        emit loginSuccessful(name, course, branch) ;
        emit passStudentID(student_id.toInt());
    }
    else{
        QMessageBox::information(this, "Info", "Invalid password.");
        return ;
    }
}


void login::on_backButton_clicked()
{
    emit setCurrentWidget(START_WIDGET) ;
}

