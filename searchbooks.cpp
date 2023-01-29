#include "searchbooks.h"
#include "ui_searchbooks.h"

searchBooks::searchBooks(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchBooks)
{
    ui->setupUi(this);
}

searchBooks::~searchBooks()
{
    delete ui;
}
