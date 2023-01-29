#include "addbookdialog.h"
#include "ui_addbookdialog.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>

addBookDialog::addBookDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addBookDialog)
{
    ui->setupUi(this);
}

addBookDialog::~addBookDialog()
{
    delete ui;
}

void addBookDialog::on_buttonBox_accepted()
{
    if(ui->bookNameLineEdit->text().isEmpty() || ui->authorNameLineEdit->text().isEmpty()
            || ui->yearLineEdit->text().isEmpty()){
        QMessageBox::information(this, "Empty field", "Please enter all the details.");
        return ;
    }

    QString bookName = ui->bookNameLineEdit->text() ;
    QString authorName = ui->authorNameLineEdit->text() ;
    QString year = ui->yearLineEdit->text() ;

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("student.db");
    QSqlDatabase::drivers();

    if(!db.open()){
        qDebug() << "Couldn't open database" ;
    }

    QSqlQuery query(db) ;

    query.prepare("INSERT INTO books (book_name, author, year) VALUES("
                  ":bookName, :authorName, :year)");
    query.bindValue(":bookName", bookName);
    query.bindValue(":authorName", authorName);
    query.bindValue(":year", year);

    if(!query.exec()){
        qDebug() << "inserting book error : " << query.lastError()  ;
        QMessageBox::critical(this, "ERROR", tr("Couldn't insert books."));
    }
    else{
        QMessageBox::information(this, "SAVED", tr("Book Saved"));
    }


}

