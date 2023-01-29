/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *logoLabel;
    QLabel *label;
    QWidget *formWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *nameLineEdit;
    QLabel *label_4;
    QLineEdit *courseLineEdit;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *passwordLineEdit;
    QLineEdit *branchLineEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *submitButton;
    QPushButton *backButton;

    void setupUi(QWidget *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(900, 700);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(signup->sizePolicy().hasHeightForWidth());
        signup->setSizePolicy(sizePolicy);
        signup->setMinimumSize(QSize(900, 700));
        signup->setMaximumSize(QSize(900, 700));
        horizontalLayoutWidget = new QWidget(signup);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 871, 111));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        logoLabel = new QLabel(horizontalLayoutWidget);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        sizePolicy.setHeightForWidth(logoLabel->sizePolicy().hasHeightForWidth());
        logoLabel->setSizePolicy(sizePolicy);
        logoLabel->setMinimumSize(QSize(150, 100));
        logoLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(logoLabel);

        label = new QLabel(signup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(400, 140, 101, 16));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        formWidget = new QWidget(signup);
        formWidget->setObjectName(QString::fromUtf8("formWidget"));
        formWidget->setGeometry(QRect(50, 180, 751, 201));
        formLayout = new QFormLayout(formWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(9);
        formLayout->setVerticalSpacing(9);
        formLayout->setContentsMargins(50, -1, 50, -1);
        label_2 = new QLabel(formWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        label_2->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        nameLineEdit = new QLineEdit(formWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nameLineEdit->sizePolicy().hasHeightForWidth());
        nameLineEdit->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(10);
        nameLineEdit->setFont(font2);
        nameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding : 3px ;\n"
"border-radius : 5px ;\n"
"}"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLineEdit);

        label_4 = new QLabel(formWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        courseLineEdit = new QLineEdit(formWidget);
        courseLineEdit->setObjectName(QString::fromUtf8("courseLineEdit"));
        sizePolicy1.setHeightForWidth(courseLineEdit->sizePolicy().hasHeightForWidth());
        courseLineEdit->setSizePolicy(sizePolicy1);
        courseLineEdit->setFont(font2);
        courseLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding : 3px ;\n"
"border-radius : 5px ;\n"
"}"));

        formLayout->setWidget(1, QFormLayout::FieldRole, courseLineEdit);

        label_6 = new QLabel(formWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        label_5 = new QLabel(formWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        passwordLineEdit = new QLineEdit(formWidget);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        sizePolicy1.setHeightForWidth(passwordLineEdit->sizePolicy().hasHeightForWidth());
        passwordLineEdit->setSizePolicy(sizePolicy1);
        passwordLineEdit->setFont(font2);
        passwordLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding : 3px ;\n"
"border-radius : 5px ;\n"
"}"));

        formLayout->setWidget(3, QFormLayout::FieldRole, passwordLineEdit);

        branchLineEdit = new QLineEdit(formWidget);
        branchLineEdit->setObjectName(QString::fromUtf8("branchLineEdit"));
        sizePolicy1.setHeightForWidth(branchLineEdit->sizePolicy().hasHeightForWidth());
        branchLineEdit->setSizePolicy(sizePolicy1);
        branchLineEdit->setFont(font2);
        branchLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding : 3px ;\n"
"border-radius : 5px ;\n"
"}"));

        formLayout->setWidget(2, QFormLayout::FieldRole, branchLineEdit);

        horizontalLayoutWidget_2 = new QWidget(signup);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(90, 400, 211, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(15);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 10, 10, 10);
        submitButton = new QPushButton(horizontalLayoutWidget_2);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(submitButton->sizePolicy().hasHeightForWidth());
        submitButton->setSizePolicy(sizePolicy2);
        submitButton->setFont(font2);
        submitButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : #1746A2 ;\n"
"border-radius : 5px ;\n"
"color : white ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color : #5F9DF7;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(submitButton);

        backButton = new QPushButton(horizontalLayoutWidget_2);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy3);
        backButton->setFont(font2);
        backButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : #1746A2 ;\n"
"border-radius : 5px ;\n"
"color : white ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color : #5F9DF7;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(backButton);


        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QWidget *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Form", nullptr));
        logoLabel->setText(QCoreApplication::translate("signup", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("signup", "SIGN UP", nullptr));
        label_2->setText(QCoreApplication::translate("signup", "Name", nullptr));
        nameLineEdit->setPlaceholderText(QCoreApplication::translate("signup", "Type your name here", nullptr));
        label_4->setText(QCoreApplication::translate("signup", "Course", nullptr));
        courseLineEdit->setPlaceholderText(QCoreApplication::translate("signup", "Type your course here", nullptr));
        label_6->setText(QCoreApplication::translate("signup", "Branch", nullptr));
        label_5->setText(QCoreApplication::translate("signup", "Password", nullptr));
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("signup", "Type your password here", nullptr));
        branchLineEdit->setPlaceholderText(QCoreApplication::translate("signup", "Type your branch here", nullptr));
        submitButton->setText(QCoreApplication::translate("signup", "Submit", nullptr));
        backButton->setText(QCoreApplication::translate("signup", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
