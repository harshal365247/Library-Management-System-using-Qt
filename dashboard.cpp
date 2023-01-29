#include "dashboard.h"
#include "ui_dashboard.h"
#include "index.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlDriver>
#include <QSqlError>
#include <QDebug>
#include <QWidgetList>
#include <QListWidgetItem>
#include <QSqlTableModel>
#include <QSqlQueryModel>


dashboard::dashboard(QWidget *parent) :
    QTabWidget(parent),
    ui(new Ui::dashboard)
{
    ui->setupUi(this);
    tabBar = QTabWidget::tabBar() ;
    tabBar->setTabText(0, "Student Info");
    tabBar->setTabText(1, "Book Section");

    ui->backButton->setIcon(QIcon("://icons/logout.png"));



}

dashboard::~dashboard()
{
    delete ui;
}

void dashboard::createIssueTable(int student_id){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("student.db");
    QSqlDatabase::drivers();

    if(!db.open()){
        qDebug() << db.lastError() ;
        return ;
    }

    QSqlQuery query(db) ;


    query.prepare("CREATE TABLE IF NOT EXISTS issue_table ("
                  "issue_id INTEGER PRIMARY KEY AUTOINCREMENT, student_id INTEGER, book_id INTEGER)");
    if(!query.exec()){
        qDebug() << "issue_table not created" ;
    }

    query.prepare("SELECT * FROM issue_table WHERE student_id == :student_id" );
    query.bindValue(":student_id",student_id);

    if(!query.exec()){
        qDebug() << "Couldn't load issue table " ;
        qDebug() << query.lastError() ;
        return ;
    }
    else{
        qDebug() << "loaded issue table successfully." ;
    }
    query.next() ;

    qDebug() << student_id ;

    QSqlQueryModel *model = new QSqlQueryModel(this);
    model->setQuery(query);
    ui->tableView->setModel(model);
    ui->tableView->show();


}

void dashboard::setStudentData(QString name, QString course, QString branch)
{
    ui->nameLabel->setText(name);
    ui->CourseLabel->setText(course);
    ui->BranchLabel->setText(branch);
}

void dashboard::receiveStduentID(int student_id)
{
    this->student_id = student_id ;
    createIssueTable(student_id);
}



void dashboard::on_backButton_clicked()
{
    emit setCurrentWidget(START_WIDGET);
}

