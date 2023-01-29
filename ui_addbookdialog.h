/********************************************************************************
** Form generated from reading UI file 'addbookdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOKDIALOG_H
#define UI_ADDBOOKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addBookDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *bookNameLineEdit;
    QLabel *label_2;
    QLineEdit *authorNameLineEdit;
    QLabel *label_3;
    QLineEdit *yearLineEdit;

    void setupUi(QDialog *addBookDialog)
    {
        if (addBookDialog->objectName().isEmpty())
            addBookDialog->setObjectName(QString::fromUtf8("addBookDialog"));
        addBookDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(addBookDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(addBookDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 50, 331, 141));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(20);
        formLayout->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        bookNameLineEdit = new QLineEdit(widget);
        bookNameLineEdit->setObjectName(QString::fromUtf8("bookNameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, bookNameLineEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        authorNameLineEdit = new QLineEdit(widget);
        authorNameLineEdit->setObjectName(QString::fromUtf8("authorNameLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, authorNameLineEdit);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        yearLineEdit = new QLineEdit(widget);
        yearLineEdit->setObjectName(QString::fromUtf8("yearLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, yearLineEdit);


        retranslateUi(addBookDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), addBookDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addBookDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(addBookDialog);
    } // setupUi

    void retranslateUi(QDialog *addBookDialog)
    {
        addBookDialog->setWindowTitle(QCoreApplication::translate("addBookDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addBookDialog", "Book Name", nullptr));
        label_2->setText(QCoreApplication::translate("addBookDialog", "Author Name", nullptr));
        label_3->setText(QCoreApplication::translate("addBookDialog", "Year", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addBookDialog: public Ui_addBookDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOKDIALOG_H
