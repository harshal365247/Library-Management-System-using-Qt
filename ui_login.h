/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *logoLabel;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *loginButton;
    QPushButton *backButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *passwordLineEdit;
    QLabel *label_2;
    QLineEdit *nameLineEdit;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(900, 700);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy);
        login->setMinimumSize(QSize(900, 700));
        login->setMaximumSize(QSize(900, 700));
        QPalette palette;
        login->setPalette(palette);
        login->setAutoFillBackground(true);
        login->setStyleSheet(QString::fromUtf8(""));
        horizontalLayoutWidget = new QWidget(login);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 881, 131));
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

        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 160, 71, 20));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        layoutWidget = new QWidget(login);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 350, 191, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 10, 10, 10);
        loginButton = new QPushButton(layoutWidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(10);
        loginButton->setFont(font1);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : #1746A2 ;\n"
"border-radius : 5px ;\n"
"color : white ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color : #5F9DF7;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(loginButton);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        sizePolicy1.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy1);
        backButton->setFont(font1);
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

        formLayoutWidget = new QWidget(login);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(79, 200, 711, 113));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(9);
        formLayout->setVerticalSpacing(15);
        formLayout->setContentsMargins(65, 15, 65, 15);
        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        label_3->setFont(font2);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        passwordLineEdit = new QLineEdit(formLayoutWidget);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(passwordLineEdit->sizePolicy().hasHeightForWidth());
        passwordLineEdit->setSizePolicy(sizePolicy2);
        passwordLineEdit->setFont(font1);
        passwordLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding : 5px ;\n"
"border-radius : 5px ;\n"
"}"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordLineEdit);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font3;
        font3.setPointSize(12);
        label_2->setFont(font3);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        nameLineEdit = new QLineEdit(formLayoutWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        sizePolicy2.setHeightForWidth(nameLineEdit->sizePolicy().hasHeightForWidth());
        nameLineEdit->setSizePolicy(sizePolicy2);
        nameLineEdit->setFont(font1);
        nameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding : 5px ;\n"
"border-radius : 5px ;\n"
"}"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLineEdit);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Form", nullptr));
        logoLabel->setText(QCoreApplication::translate("login", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("login", "LOG IN ", nullptr));
        loginButton->setText(QCoreApplication::translate("login", "Log In", nullptr));
        backButton->setText(QCoreApplication::translate("login", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("login", "Password", nullptr));
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("login", "Please type your password here", nullptr));
        label_2->setText(QCoreApplication::translate("login", "User ID", nullptr));
        nameLineEdit->setPlaceholderText(QCoreApplication::translate("login", "Type your user ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
