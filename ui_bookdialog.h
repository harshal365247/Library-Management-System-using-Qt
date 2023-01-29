/********************************************************************************
** Form generated from reading UI file 'bookdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKDIALOG_H
#define UI_BOOKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_bookdialog
{
public:
    QTableView *bookTable;

    void setupUi(QDialog *bookdialog)
    {
        if (bookdialog->objectName().isEmpty())
            bookdialog->setObjectName(QString::fromUtf8("bookdialog"));
        bookdialog->resize(700, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bookdialog->sizePolicy().hasHeightForWidth());
        bookdialog->setSizePolicy(sizePolicy);
        bookTable = new QTableView(bookdialog);
        bookTable->setObjectName(QString::fromUtf8("bookTable"));
        bookTable->setGeometry(QRect(10, 11, 681, 381));

        retranslateUi(bookdialog);

        QMetaObject::connectSlotsByName(bookdialog);
    } // setupUi

    void retranslateUi(QDialog *bookdialog)
    {
        bookdialog->setWindowTitle(QCoreApplication::translate("bookdialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bookdialog: public Ui_bookdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKDIALOG_H
