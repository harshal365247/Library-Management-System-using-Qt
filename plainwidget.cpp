#include "plainwidget.h"
#include "ui_plainwidget.h"

plainwidget::plainwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::plainwidget)
{
    ui->setupUi(this);
}

plainwidget::~plainwidget()
{
    delete ui;
}
