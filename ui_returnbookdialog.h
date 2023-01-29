/********************************************************************************
** Form generated from reading UI file 'returnbookdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNBOOKDIALOG_H
#define UI_RETURNBOOKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_returnbookdialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *studentIDEdit;
    QLineEdit *bookIDEdit;
    QLabel *label_2;

    void setupUi(QDialog *returnbookdialog)
    {
        if (returnbookdialog->objectName().isEmpty())
            returnbookdialog->setObjectName(QString::fromUtf8("returnbookdialog"));
        returnbookdialog->resize(400, 169);
        buttonBox = new QDialogButtonBox(returnbookdialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 130, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(returnbookdialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 20, 331, 81));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(10);
        formLayout->setContentsMargins(10, 10, 10, 10);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        studentIDEdit = new QLineEdit(widget);
        studentIDEdit->setObjectName(QString::fromUtf8("studentIDEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, studentIDEdit);

        bookIDEdit = new QLineEdit(widget);
        bookIDEdit->setObjectName(QString::fromUtf8("bookIDEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, bookIDEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);


        retranslateUi(returnbookdialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), returnbookdialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), returnbookdialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(returnbookdialog);
    } // setupUi

    void retranslateUi(QDialog *returnbookdialog)
    {
        returnbookdialog->setWindowTitle(QCoreApplication::translate("returnbookdialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("returnbookdialog", "Student ID", nullptr));
        label_2->setText(QCoreApplication::translate("returnbookdialog", "Book ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class returnbookdialog: public Ui_returnbookdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNBOOKDIALOG_H
