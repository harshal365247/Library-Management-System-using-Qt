#include "issuedialog.h"
#include "ui_issuedialog.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QSqlRecord>

issueDialog::issueDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::issueDialog)
{
    ui->setupUi(this);
}

issueDialog::~issueDialog()
{
    delete ui;
}

void issueDialog::on_buttonBox_accepted()
{
    QString bookName = ui->bookNameLineEdit->text();
    QString author = ui->authorNameLineEdit->text() ;
    int year = ui->yearEdit->text().toInt();
    int student_id = ui->studentLineEdit->text().toInt();

    if(bookName.isEmpty() || author.isEmpty() || year == 0){
        QMessageBox::critical(this, "Error", "Please enter all details.");
        return ;
    }

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("student.db");
    QSqlDatabase::drivers();

    if(!db.open()){
        qDebug() << "Couldn't open database" ;
    }

    QSqlQuery query(db) ;

    // TODO : check if student exists or not .

    query.prepare("SELECT * FROM books WHERE ( book_name LIKE (:bookName) AND author LIKE (:author) AND"
                  " year == (:year) AND available == true )");
    query.bindValue(":bookName",bookName);
    query.bindValue(":author", author);
    query.bindValue(":year", year);
    if(!query.exec()){
        qDebug() << "issue books " << query.lastError() ;
    }
    query.next();

    QSqlRecord record = query.record() ;
    if(record.isNull("book_name")){
        QMessageBox::information(this, "Not available", "Book is not available.");
        return ;
    }
    else{
        int index = record.indexOf("book_id");
        int book_id = query.value(index).toInt();
        query.prepare("UPDATE books SET available = false WHERE (book_id == :book_id)");
        query.bindValue(":book_id",book_id);
        if(!query.exec()){
            qDebug() << query.lastError() ;
        }

        query.prepare("INSERT INTO issue_table ( student_id, book_id, book_name, author) VALUES (:student_id, :book_id"
                      ", :book_name, :author)");
        query.bindValue(":student_id",student_id);
        query.bindValue(":book_id",book_id);
        query.bindValue(":book_name",bookName);
        query.bindValue(":author", author);
        if(!query.exec()){
            qDebug() << query.lastError() ;
        }
        else{
            qDebug() << "values inserted" ;
        }
        query.next();
        QMessageBox::information(this, "Done", "Book issued");
    }

}

