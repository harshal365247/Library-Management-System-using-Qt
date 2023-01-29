/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QWidget *studentInfoTab;
    QPushButton *backButton;
    QFrame *loginFrame;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *nameLabel;
    QLabel *label_2;
    QLabel *CourseLabel;
    QLabel *label_3;
    QLabel *BranchLabel;
    QWidget *tab_2;
    QTableView *tableView;

    void setupUi(QTabWidget *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName(QString::fromUtf8("dashboard"));
        dashboard->resize(900, 700);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dashboard->sizePolicy().hasHeightForWidth());
        dashboard->setSizePolicy(sizePolicy);
        dashboard->setMinimumSize(QSize(900, 700));
        dashboard->setMaximumSize(QSize(900, 700));
        studentInfoTab = new QWidget();
        studentInfoTab->setObjectName(QString::fromUtf8("studentInfoTab"));
        backButton = new QPushButton(studentInfoTab);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(20, 510, 100, 30));
        sizePolicy.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy);
        backButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : #1746A2 ;\n"
"border-radius : 5px ;\n"
"color : white ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color : #1565C0;\n"
"}\n"
""));
        loginFrame = new QFrame(studentInfoTab);
        loginFrame->setObjectName(QString::fromUtf8("loginFrame"));
        loginFrame->setGeometry(QRect(20, 20, 191, 201));
        sizePolicy.setHeightForWidth(loginFrame->sizePolicy().hasHeightForWidth());
        loginFrame->setSizePolicy(sizePolicy);
        loginFrame->setFrameShape(QFrame::StyledPanel);
        loginFrame->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(loginFrame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(15);
        label = new QLabel(loginFrame);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(50, 20));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        nameLabel = new QLabel(loginFrame);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy1);
        nameLabel->setMinimumSize(QSize(100, 20));
        QFont font1;
        font1.setPointSize(12);
        nameLabel->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLabel);

        label_2 = new QLabel(loginFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(50, 20));
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        CourseLabel = new QLabel(loginFrame);
        CourseLabel->setObjectName(QString::fromUtf8("CourseLabel"));
        sizePolicy1.setHeightForWidth(CourseLabel->sizePolicy().hasHeightForWidth());
        CourseLabel->setSizePolicy(sizePolicy1);
        CourseLabel->setMinimumSize(QSize(100, 20));
        CourseLabel->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, CourseLabel);

        label_3 = new QLabel(loginFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(50, 20));
        label_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        BranchLabel = new QLabel(loginFrame);
        BranchLabel->setObjectName(QString::fromUtf8("BranchLabel"));
        sizePolicy1.setHeightForWidth(BranchLabel->sizePolicy().hasHeightForWidth());
        BranchLabel->setSizePolicy(sizePolicy1);
        BranchLabel->setMinimumSize(QSize(100, 20));
        BranchLabel->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, BranchLabel);

        dashboard->addTab(studentInfoTab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 10, 851, 561));
        dashboard->addTab(tab_2, QString());

        retranslateUi(dashboard);

        dashboard->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QTabWidget *dashboard)
    {
        dashboard->setWindowTitle(QCoreApplication::translate("dashboard", "TabWidget", nullptr));
        backButton->setText(QCoreApplication::translate("dashboard", "LOG OUT", nullptr));
        label->setText(QCoreApplication::translate("dashboard", "Name", nullptr));
        nameLabel->setText(QCoreApplication::translate("dashboard", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("dashboard", "Course", nullptr));
        CourseLabel->setText(QCoreApplication::translate("dashboard", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("dashboard", "Branch", nullptr));
        BranchLabel->setText(QCoreApplication::translate("dashboard", "TextLabel", nullptr));
        dashboard->setTabText(dashboard->indexOf(studentInfoTab), QCoreApplication::translate("dashboard", "Page", nullptr));
        dashboard->setTabText(dashboard->indexOf(tab_2), QCoreApplication::translate("dashboard", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
