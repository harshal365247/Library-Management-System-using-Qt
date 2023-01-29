#include "removestudentdialog.h"
#include "ui_removestudentdialog.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>

removestudentdialog::removestudentdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::removestudentdialog)
{
    ui->setupUi(this);
}

removestudentdialog::~removestudentdialog()
{
    delete ui;
}


