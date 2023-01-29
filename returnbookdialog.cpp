#include "returnbookdialog.h"
#include "ui_returnbookdialog.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>

returnbookdialog::returnbookdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::returnbookdialog)
{
    ui->setupUi(this);
}

returnbookdialog::~returnbookdialog()
{
    delete ui;
}

void returnbookdialog::on_buttonBox_accepted()
{
    int student_id = ui->studentIDEdit->text().toInt() ;
    int book_id = ui->bookIDEdit->text().toInt();

    if(student_id == 0 || book_id == 0){
        QMessageBox::critical(this, "Error","Please enter all the details.");
        return ;
    }


    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("student.db");
    QSqlDatabase::drivers();

    if(!db.open()){
        qDebug() << "Couldn't open database" ;
    }

    QSqlQuery query(db) ;

    query.prepare("DELETE FROM issue_table WHERE ( student_id == (:student_id) AND book_id == (:book_id) )");
    query.bindValue(":student_id",student_id);
    query.bindValue(":book_id",book_id);

    if(!query.exec()){
        QMessageBox::critical(this, "Error", "Couldn't return the book.");
        qDebug() << "deleting issued book error" ;
        qDebug() << query.lastError() ;
        return ;
    }

    query.prepare("UPDATE books SET available = true WHERE (book_id == :book_id)");
    query.bindValue(":book_id", book_id);

    if(!query.exec()){
        QMessageBox::critical(this, "Error", "Couldn't return the book.");
        return ;
    }
    else{
        QMessageBox::information(this, "Returned","Book returned successfully.");
        return ;
    }


}

