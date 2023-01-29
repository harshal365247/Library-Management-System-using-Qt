#include "signup.h"
#include "ui_signup.h"
#include <student.h>
#include <QSettings>
#include <QDebug>
#include <index.h>
#include <QVariant>
#include <QSql>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QGraphicsDropShadowEffect>

signup::signup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);

    errorBox = new QMessageBox(this);

    QString src = "://icons/library.png";
    QPixmap pixmap(src);
    ui->logoLabel->setPixmap(pixmap);

    QGraphicsDropShadowEffect *shadow1 = new QGraphicsDropShadowEffect(this) ;
    shadow1->setColor(QColor(211,211,211));
    shadow1->setOffset(2);

    QGraphicsDropShadowEffect *shadow2 = new QGraphicsDropShadowEffect(this) ;
    shadow2->setColor(QColor(211,211,211));
    shadow2->setOffset(2);

    ui->submitButton->setGraphicsEffect(shadow1);
    ui->backButton->setGraphicsEffect(shadow2);

}

signup::~signup()
{
    delete ui;
}

void signup::on_submitButton_clicked()
{
    if(ui->nameLineEdit->text().isEmpty() || ui->courseLineEdit->text().isEmpty() || ui->branchLineEdit->text().isEmpty()
            || ui->passwordLineEdit->text().isEmpty() ){
        errorBox->setText("Please enter all necessary details. ");
        errorBox->show();
        return ;
    }

    QString name = ui->nameLineEdit->text();
    QString course = ui->courseLineEdit->text();
    QString branch = ui->branchLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    ui->nameLineEdit->clear() ;
    ui->courseLineEdit->clear();
    ui->branchLineEdit->clear();
    ui->passwordLineEdit->clear();

    QSqlDatabase student_db = QSqlDatabase::addDatabase("QSQLITE");
    student_db.setDatabaseName("student.db");
    QSqlDatabase::drivers();

    if(!student_db.open()){
        qDebug() << "No connection established. " ;
    }
    else{
        qDebug() << "Connection established. "  ;
    }

    QSqlQuery query(student_db);

    query.prepare( " CREATE TABLE IF NOT EXISTS student("
                   "name VARCHAR(30) , password VARCHAR(30), course VARCHAR(30), branch VARCHAR(30),"
                   "student_id INTEGER PRIMARY KEY AUTOINCREMENT )");

    if(query.exec()){
        qDebug() << "Student Table created. " ;
    }
    else{
        qDebug() << "Student Table not created. "  ;
    }


    query.prepare("INSERT INTO student (name, password, course, branch) VALUES (:name, :password, :course, :branch) ");
    query.bindValue(":name" , name);
    query.bindValue(":password", password);
    query.bindValue(":course", course);
    query.bindValue(":branch", branch);

    if(!query.exec()) qDebug() << "student not inserted." ;

    query.prepare("SELECT last_insert_rowid()");
    if(!query.exec()) qDebug() << "couldn't get student_id" ;
    query.next() ;

    int student_id = query.value(0).toInt() ;

    if(query.exec()){
        QMessageBox::information(this, "SAVED", tr("User ID created."
                                                "Your ID is %1").arg(student_id));

    }
    else{
        QMessageBox::critical(this, "ERROR", "User ID not created.");
    }




    emit setCurrentWidget(START_WIDGET);

}


void signup::on_backButton_clicked()
{
    emit setCurrentWidget(START_WIDGET);
}

