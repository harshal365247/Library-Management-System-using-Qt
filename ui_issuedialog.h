/********************************************************************************
** Form generated from reading UI file 'issuedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISSUEDIALOG_H
#define UI_ISSUEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_issueDialog
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
    QLineEdit *yearEdit;
    QLabel *label_4;
    QLineEdit *studentLineEdit;

    void setupUi(QDialog *issueDialog)
    {
        if (issueDialog->objectName().isEmpty())
            issueDialog->setObjectName(QString::fromUtf8("issueDialog"));
        issueDialog->resize(400, 286);
        buttonBox = new QDialogButtonBox(issueDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(issueDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 40, 351, 181));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(10);
        formLayout->setContentsMargins(10, 10, 10, 10);
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

        yearEdit = new QLineEdit(widget);
        yearEdit->setObjectName(QString::fromUtf8("yearEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, yearEdit);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        studentLineEdit = new QLineEdit(widget);
        studentLineEdit->setObjectName(QString::fromUtf8("studentLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, studentLineEdit);


        retranslateUi(issueDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), issueDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), issueDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(issueDialog);
    } // setupUi

    void retranslateUi(QDialog *issueDialog)
    {
        issueDialog->setWindowTitle(QCoreApplication::translate("issueDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("issueDialog", "Book Name", nullptr));
        label_2->setText(QCoreApplication::translate("issueDialog", "Author Name", nullptr));
        label_3->setText(QCoreApplication::translate("issueDialog", "Year", nullptr));
        label_4->setText(QCoreApplication::translate("issueDialog", "Student ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class issueDialog: public Ui_issueDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISSUEDIALOG_H
