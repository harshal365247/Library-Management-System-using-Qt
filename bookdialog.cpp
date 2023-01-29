#include "bookdialog.h"
#include "ui_bookdialog.h"

bookdialog::bookdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bookdialog)
{
    ui->setupUi(this);
}

bookdialog::~bookdialog()
{
    delete ui;
}
