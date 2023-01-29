#include "mainwindow.h"
#include <QFile>
#include <QIODevice>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(900, 700);
    QFile file(":/styles/style1.css");

    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QString css = QLatin1String(file.readAll()) ;
        a.setStyleSheet(css) ;
    }

    w.show();
    return a.exec();
}
