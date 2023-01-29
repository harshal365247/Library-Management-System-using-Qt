/********************************************************************************
** Form generated from reading UI file 'startwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTWIDGET_H
#define UI_STARTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_startWidget
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *loginButton;
    QPushButton *signupButton;

    void setupUi(QWidget *startWidget)
    {
        if (startWidget->objectName().isEmpty())
            startWidget->setObjectName(QString::fromUtf8("startWidget"));
        startWidget->setWindowModality(Qt::NonModal);
        startWidget->resize(900, 700);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(startWidget->sizePolicy().hasHeightForWidth());
        startWidget->setSizePolicy(sizePolicy);
        startWidget->setMinimumSize(QSize(900, 700));
        startWidget->setMaximumSize(QSize(900, 700));
        startWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color : white ;\n"
"}"));
        horizontalLayoutWidget = new QWidget(startWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 881, 677));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(50);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(200, 325, 200, 300);
        loginButton = new QPushButton(horizontalLayoutWidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        loginButton->setFont(font);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : #1746A2 ;\n"
"border-radius : 5px ;\n"
"color : white ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color : #5F9DF7;\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(loginButton);

        signupButton = new QPushButton(horizontalLayoutWidget);
        signupButton->setObjectName(QString::fromUtf8("signupButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(signupButton->sizePolicy().hasHeightForWidth());
        signupButton->setSizePolicy(sizePolicy2);
        signupButton->setFont(font);
        signupButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : #1746A2 ;\n"
"border-radius : 5px ;\n"
"color : white ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color : #5F9DF7;\n"
"}\n"
""));

        horizontalLayout->addWidget(signupButton);


        retranslateUi(startWidget);

        QMetaObject::connectSlotsByName(startWidget);
    } // setupUi

    void retranslateUi(QWidget *startWidget)
    {
        startWidget->setWindowTitle(QCoreApplication::translate("startWidget", "Form", nullptr));
        loginButton->setText(QCoreApplication::translate("startWidget", "LOG IN", nullptr));
        signupButton->setText(QCoreApplication::translate("startWidget", "SIGN UP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class startWidget: public Ui_startWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTWIDGET_H
