#include "admindashboard.h"
#include "qsqlerror.h"
#include "ui_admindashboard.h"
#include <QTabWidget>
#include <QTabBar>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <addbookdialog.h>
#include <QInputDialog>
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>
#include <QWidget>
#include <QTabWidget>
#include <bookdialog.h>
#include <QSqlQueryModel>
#include <QTableView>
#include <issuedialog.h>
#include <QSqlRecord>
#include <returnbookdialog.h>
#include <index.h>
#include <QFile>
#include <QGraphicsDropShadowEffect>


admindashboard::admindashboard(QWidget *parent) :
    QTabWidget(parent),
    ui(new Ui::admindashboard)
{
    ui->setupUi(this);
    tabbar = QTabWidget::tabBar();
    tabbar->setTabText(0, "Student Info");
    tabbar->setTabText(1, "Books section");

    setIcons() ;
    setShadow() ;
    setBooksTable() ;


}

void admindashboard::setBooksTable()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("student.db");
    QSqlDatabase::drivers();

    if(db.open()){
        qDebug() << "Databse is open" ;
         qDebug() << db.databaseName() ;
    }
    else{
        qDebug() << "Database is not open" ;
        qDebug() << db.lastError();
        return ;
    }

    QSqlQueryModel *model = new QSqlQueryModel(this);

    QSqlQuery query(db);

    query.prepare("SELECT * FROM books");

    if(!query.exec()){
        qDebug() << "books table couldn't be displayed." ;
        return ;
    }

    model->setQuery(query);
    ui->allBooksTableView->setModel(model);
    ui->allBooksTableView->show();

}

void admindashboard::setShadow()
{
    QGraphicsDropShadowEffect *shadow1 = new QGraphicsDropShadowEffect(this) ;
    shadow1->setColor(QColor(211,211,211));
    shadow1->setOffset(2);

    QGraphicsDropShadowEffect *shadow2 = new QGraphicsDropShadowEffect(this) ;
    shadow2->setColor(QColor(211,211,211));
    shadow2->setOffset(2);

    QGraphicsDropShadowEffect *shadow3 = new QGraphicsDropShadowEffect(this) ;
    shadow3->setColor(QColor(211,211,211));
    shadow3->setOffset(2);

    QGraphicsDropShadowEffect *shadow4 = new QGraphicsDropShadowEffect(this) ;
    shadow4->setColor(QColor(211,211,211));
    shadow4->setOffset(2);


    QGraphicsDropShadowEffect *shadow5 = new QGraphicsDropShadowEffect(this) ;
    shadow5->setColor(QColor(211,211,211));
    shadow5->setOffset(2);

    QGraphicsDropShadowEffect *shadow6 = new QGraphicsDropShadowEffect(this) ;
    shadow6->setColor(QColor(211,211,211));
    shadow6->setOffset(2);

    QGraphicsDropShadowEffect *shadow7 = new QGraphicsDropShadowEffect(this) ;
    shadow7->setColor(QColor(211,211,211));
    shadow7->setOffset(2);

    QGraphicsDropShadowEffect *shadow8 = new QGraphicsDropShadowEffect(this) ;
    shadow8->setColor(QColor(211,211,211));
    shadow8->setOffset(2);

    ui->issueButton->setGraphicsEffect(shadow1);
    ui->returnBookButton->setGraphicsEffect(shadow2);
    ui->backButton->setGraphicsEffect(shadow3);
    ui->pushButton_2->setGraphicsEffect(shadow4);
    ui->searchbookButton->setGraphicsEffect(shadow5);
    ui->searchByName->setGraphicsEffect(shadow6);
    ui->addbookButton->setGraphicsEffect(shadow7);
    ui->returnBookButton->setGraphicsEffect(shadow8);

}

void admindashboard::setIcons()
{
    ui->issueButton->setIcon(QIcon("://icons/stamp.png"));
    ui->returnBookButton->setIcon(QIcon("://icons/product-return.png"));
    ui->pushButton_2->setIcon(QIcon("://icons/reading.png"));
    ui->backButton->setIcon(QIcon("://icons/logout.png"));
    ui->addbookButton->setIcon(QIcon("://icons/add.png"));
    ui->searchbookButton->setIcon(QIcon("://icons/loupe.png"));
    ui->searchByName->setIcon(QIcon("://icons/loupe.png"));
    ui->refreshBooksTable->setIcon(QIcon("://icons/refresh.png"));
    ui->pushButton->setIcon(QIcon("://icons/delete.png"));
    ui->pushButton_3->setIcon(QIcon("://icons/delete.png"));
}

admindashboard::~admindashboard()
{
    delete ui;
}

void admindashboard::on_addbookButton_clicked()
{
   addBookDialog *dialog = new addBookDialog(this) ;
    dialog->show() ;
}


void admindashboard::on_searchbookButton_clicked()
{
    bool ok = false ;
    int book_id = QInputDialog::getInt(this, "Search book","Enter book's ID",0,0,214748367,1,&ok);
    if(book_id == 0 || ok == false){
        QMessageBox::information(this, "Error","Please enter book's name");
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
        qDebug() << db.lastError();
        return ;
    }

    QSqlQuery query(db);

    query.prepare("SELECT * FROM books WHERE book_id LIKE (:book_name)");
    query.bindValue(":book_name",book_id);
    if(!query.exec()) qDebug() << query.lastError() ;


    bookdialog *dialog = new bookdialog(this) ;
    QSqlQueryModel *model = new QSqlQueryModel(this);
    model->setQuery(query);

    QTableView *table = dialog->findChild<QTableView*>("bookTable") ;
    table->setModel(model);
    dialog->show();
    table->show();
}


void admindashboard::on_issueButton_clicked()
{
    issueDialog *dialog = new issueDialog(this);
    dialog->show();

}


void admindashboard::on_pushButton_2_clicked()
{
    bool ok = false ;
    int student_id = QInputDialog::getInt(this, "Input","Enter the student ID ",0,0,21474867,1,&ok);

    if(ok){
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

        query.prepare("SELECT * FROM student WHERE student_id == :student_id");
        query.bindValue(":student_id",student_id);

        if(!query.exec()){
            QMessageBox::information(this, "Error", "Student not present");
        }
        query.next();

        QSqlRecord record = query.record();
        int NameIndex = record.indexOf("name");
        int courseIndex = record.indexOf("course");
        int branchIndex = record.indexOf("branch");

        ui->nameLabel->setText(query.value(NameIndex).toString());
        ui->courseLabel->setText(query.value(courseIndex).toString());
        ui->branchLabel->setText(query.value(branchIndex).toString());

        query.prepare("SELECT * FROM issue_table WHERE student_id == :student_id");
        query.bindValue(":student_id",student_id);

        if(!query.exec()){
            qDebug() << "Error couldn't find issued books" ;
            qDebug() << query.lastError() ;
        }

        QSqlQueryModel *model = new QSqlQueryModel(this);
        QTableView *issuedBooks = ui->tableView ;
        model->setQuery(query);
        issuedBooks->setModel(model);
        issuedBooks->show();
    }
}


void admindashboard::on_returnBookButton_clicked()
{
    returnbookdialog *returnDialog = new returnbookdialog(this);
    returnDialog->show() ;
}


void admindashboard::on_backButton_clicked()
{
    emit setCurrentWidget(START_WIDGET);
}


void admindashboard::on_searchByName_clicked()
{
    bool ok = false ;
    QString book_name = QInputDialog::getText(this, "Search book","Enter book's Name", QLineEdit::Normal,
                                              "",&ok);
    if(book_name.isEmpty() || ok == false){
        QMessageBox::information(this, "Error","Please enter book's name");
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
        qDebug() << db.lastError();
        return ;
    }

    QSqlQuery query(db);

    query.prepare("SELECT * FROM books WHERE book_name LIKE (:book_name)");
    query.bindValue(":book_name",book_name);
    if(!query.exec()) qDebug() << query.lastError() ;


    bookdialog *dialog = new bookdialog(this) ;
    QSqlQueryModel *model = new QSqlQueryModel(this);
    model->setQuery(query);

    QTableView *table = dialog->findChild<QTableView*>("bookTable") ;
    table->setModel(model);
    dialog->show();
    table->show();
}


void admindashboard::on_refreshBooksTable_clicked()
{
    setBooksTable() ;
}


void admindashboard::on_pushButton_clicked()
{
    bool ok = false ;
    int student_id = QInputDialog::getInt(this, "Input","Enter the student ID ",0,0,21474867,1,&ok);

    if(ok){
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

        query.prepare("SELECT book_id FROM issue_table WHERE student_id == :student_id ") ;
        query.bindValue(":student_id", student_id) ;
        if(!query.exec()) qDebug() << query.lastError() << "first";

        QVector<int> books ;

        while(query.next()){
            QSqlRecord record = query.record() ;
            books.push_back(query.value(record.indexOf("book_id")).toInt()) ;
            qDebug() << books.last() ;
        }

        query.prepare("DELETE FROM issue_table WHERE student_id == :student_id ") ;
        query.bindValue(":student_id", student_id) ;
        if(!query.exec()) qDebug() << query.lastError() << "second" ;

        query.prepare("DELETE FROM student WHERE student_id == :student_id") ;
        query.bindValue(":student_id", student_id) ;
        if(!query.exec()) qDebug() << query.lastError() << "third";

        while(!books.isEmpty()){
            int book_id = books.takeLast() ;
            query.prepare("UPDATE books SET available = true WHERE book_id == :book_id") ;
            query.bindValue(":book_id", book_id) ;
            qDebug() << book_id ;

            if(!query.exec()){
                QMessageBox::critical(this, "Error", QString("Couldn't delete Student with ID %1. ").arg(student_id));
                qDebug() << query.lastError() ;
                return ;
            }
            else{
                QMessageBox::information(this, "Returned",QString("Student with ID %1 deleted successfully. ").arg(student_id));
                return ;
            }
        }

    }
}


void admindashboard::on_pushButton_3_clicked()
{
    bool ok = false ;
    int book_id = QInputDialog::getInt(this, "Delete book", "Enter the ID of the book : ", 1, 1, 214783647, 1, &ok) ;

    if(ok){
        QSqlDatabase student_db = QSqlDatabase::addDatabase("QSQLITE");
        student_db.setDatabaseName("student.db");
        QSqlDatabase::drivers();

        if(!student_db.open()){
            qDebug() << "No connection established. " ;
        }
        else{
            qDebug() << "Connection established. "  ;
        }

        QSqlQuery query(student_db) ;

        query.prepare("DELETE FROM books WHERE book_id == :book_id") ;
        query.bindValue(":book_id", book_id) ;

        if(!query.exec()){
            qDebug() << query.lastError() << " Couldn't delete book" ;
            QMessageBox::critical(this, "Error", QString("Couldn't delete book.").arg(book_id) ) ;
            return ;
        }

        query.prepare("DELETE FROM issue_table WHERE book_id == :book_id") ;
        query.bindValue(":book_id", book_id) ;

        if(!query.exec()){
            qDebug() << query.lastError() << " Couldn't delete book" ;
            QMessageBox::critical(this, "Error", QString("Couldn't delete book.").arg(book_id) ) ;
            return ;
        }

        QMessageBox::information(this, "Successfull", QString("Book with ID %1 deleted successfully.").arg(book_id) ) ;
    }
}

