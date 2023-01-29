/********************************************************************************
** Form generated from reading UI file 'admindashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDASHBOARD_H
#define UI_ADMINDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admindashboard
{
public:
    QWidget *tab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QFrame *buttonFrame;
    QVBoxLayout *verticalLayout_2;
    QPushButton *issueButton;
    QPushButton *returnBookButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *backButton;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QFrame *studentInfoFrame;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLabel *nameLabel;
    QLabel *label_2;
    QLabel *courseLabel;
    QLabel *label_3;
    QLabel *branchLabel;
    QTableView *tableView;
    QWidget *tab_2;
    QFrame *frame;
    QPushButton *searchbookButton;
    QPushButton *searchByName;
    QPushButton *addbookButton;
    QPushButton *refreshBooksTable;
    QTableView *allBooksTableView;
    QPushButton *pushButton_3;

    void setupUi(QTabWidget *admindashboard)
    {
        if (admindashboard->objectName().isEmpty())
            admindashboard->setObjectName(QString::fromUtf8("admindashboard"));
        admindashboard->resize(900, 700);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(admindashboard->sizePolicy().hasHeightForWidth());
        admindashboard->setSizePolicy(sizePolicy);
        admindashboard->setMinimumSize(QSize(900, 700));
        admindashboard->setMaximumSize(QSize(900, 700));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 181, 481));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        buttonFrame = new QFrame(layoutWidget);
        buttonFrame->setObjectName(QString::fromUtf8("buttonFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonFrame->sizePolicy().hasHeightForWidth());
        buttonFrame->setSizePolicy(sizePolicy1);
        buttonFrame->setFrameShape(QFrame::Box);
        buttonFrame->setFrameShadow(QFrame::Raised);
        buttonFrame->setLineWidth(1);
        buttonFrame->setMidLineWidth(1);
        verticalLayout_2 = new QVBoxLayout(buttonFrame);
        verticalLayout_2->setSpacing(15);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(15, 15, 15, 15);
        issueButton = new QPushButton(buttonFrame);
        issueButton->setObjectName(QString::fromUtf8("issueButton"));
        issueButton->setMinimumSize(QSize(0, 75));
        QFont font;
        font.setPointSize(10);
        issueButton->setFont(font);
        issueButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : #1746A2 ;\n"
"color : white ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color : #1565C0;\n"
"}"));
        issueButton->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(issueButton);

        returnBookButton = new QPushButton(buttonFrame);
        returnBookButton->setObjectName(QString::fromUtf8("returnBookButton"));
        returnBookButton->setMinimumSize(QSize(0, 75));
        returnBookButton->setFont(font);
        returnBookButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : #1746A2 ;\n"
"color : white ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color : #1565C0;\n"
"}"));
        returnBookButton->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(returnBookButton);

        pushButton_2 = new QPushButton(buttonFrame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 75));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : #1746A2 ;\n"
"color : white ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color : #1565C0;\n"
"}"));
        pushButton_2->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(buttonFrame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMinimumSize(QSize(0, 75));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : #1746A2 ;\n"
"color : white ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color : #1565C0;\n"
"}"));
        pushButton->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton);

        backButton = new QPushButton(buttonFrame);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        sizePolicy1.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy1);
        backButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : #1746A2 ;\n"
"color : white ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color : #1565C0;\n"
"}"));
        backButton->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(backButton);


        verticalLayout->addWidget(buttonFrame);

        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(184, 10, 681, 123));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(0);
        formLayout->setVerticalSpacing(0);
        formLayout->setContentsMargins(0, 0, 0, 0);
        studentInfoFrame = new QFrame(layoutWidget1);
        studentInfoFrame->setObjectName(QString::fromUtf8("studentInfoFrame"));
        sizePolicy1.setHeightForWidth(studentInfoFrame->sizePolicy().hasHeightForWidth());
        studentInfoFrame->setSizePolicy(sizePolicy1);
        studentInfoFrame->setMinimumSize(QSize(0, 0));
        studentInfoFrame->setFrameShape(QFrame::Box);
        studentInfoFrame->setFrameShadow(QFrame::Raised);
        studentInfoFrame->setLineWidth(1);
        formLayout_2 = new QFormLayout(studentInfoFrame);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label = new QLabel(studentInfoFrame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        label->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        nameLabel = new QLabel(studentInfoFrame);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, nameLabel);

        label_2 = new QLabel(studentInfoFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        courseLabel = new QLabel(studentInfoFrame);
        courseLabel->setObjectName(QString::fromUtf8("courseLabel"));
        courseLabel->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, courseLabel);

        label_3 = new QLabel(studentInfoFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        label_3->setFont(font2);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        branchLabel = new QLabel(studentInfoFrame);
        branchLabel->setObjectName(QString::fromUtf8("branchLabel"));
        branchLabel->setFont(font1);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, branchLabel);


        formLayout->setWidget(0, QFormLayout::FieldRole, studentInfoFrame);

        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(190, 150, 681, 431));
        tableView->setStyleSheet(QString::fromUtf8(""));
        admindashboard->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        frame = new QFrame(tab_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 871, 591));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        searchbookButton = new QPushButton(frame);
        searchbookButton->setObjectName(QString::fromUtf8("searchbookButton"));
        searchbookButton->setGeometry(QRect(20, 20, 161, 24));
        searchbookButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : #1746A2 ;\n"
"border-radius : 5px ;\n"
"color : white ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color : #1565C0;\n"
"}"));
        searchByName = new QPushButton(frame);
        searchByName->setObjectName(QString::fromUtf8("searchByName"));
        searchByName->setGeometry(QRect(20, 50, 161, 24));
        searchByName->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : #1746A2 ;\n"
"border-radius : 5px ;\n"
"color : white ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color : #1565C0;\n"
"}"));
        addbookButton = new QPushButton(frame);
        addbookButton->setObjectName(QString::fromUtf8("addbookButton"));
        addbookButton->setGeometry(QRect(20, 80, 161, 24));
        addbookButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : #1746A2 ;\n"
"border-radius : 5px ;\n"
"color : white ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color : #1565C0;\n"
"}"));
        refreshBooksTable = new QPushButton(frame);
        refreshBooksTable->setObjectName(QString::fromUtf8("refreshBooksTable"));
        refreshBooksTable->setGeometry(QRect(750, 80, 91, 24));
        refreshBooksTable->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : #1746A2 ;\n"
"border-radius : 5px ;\n"
"color : white ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color : #1565C0;\n"
"}"));
        allBooksTableView = new QTableView(frame);
        allBooksTableView->setObjectName(QString::fromUtf8("allBooksTableView"));
        allBooksTableView->setGeometry(QRect(20, 120, 831, 451));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 20, 161, 24));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : #1746A2 ;\n"
"border-radius : 5px ;\n"
"color : white ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color : #1565C0;\n"
"}"));
        admindashboard->addTab(tab_2, QString());

        retranslateUi(admindashboard);

        admindashboard->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(admindashboard);
    } // setupUi

    void retranslateUi(QTabWidget *admindashboard)
    {
        admindashboard->setWindowTitle(QCoreApplication::translate("admindashboard", "TabWidget", nullptr));
        issueButton->setText(QCoreApplication::translate("admindashboard", "Issue book", nullptr));
        returnBookButton->setText(QCoreApplication::translate("admindashboard", "Return book", nullptr));
        pushButton_2->setText(QCoreApplication::translate("admindashboard", "Student Info", nullptr));
        pushButton->setText(QCoreApplication::translate("admindashboard", "Delete ID", nullptr));
        backButton->setText(QCoreApplication::translate("admindashboard", "LOG OUT", nullptr));
        label->setText(QCoreApplication::translate("admindashboard", "Name  :", nullptr));
        nameLabel->setText(QString());
        label_2->setText(QCoreApplication::translate("admindashboard", "Course :", nullptr));
        courseLabel->setText(QString());
        label_3->setText(QCoreApplication::translate("admindashboard", "Branch :", nullptr));
        branchLabel->setText(QString());
        admindashboard->setTabText(admindashboard->indexOf(tab), QCoreApplication::translate("admindashboard", "Page", nullptr));
        searchbookButton->setText(QCoreApplication::translate("admindashboard", " Search Book (ID)", nullptr));
        searchByName->setText(QCoreApplication::translate("admindashboard", "Search Book (Name)", nullptr));
        addbookButton->setText(QCoreApplication::translate("admindashboard", "Add Book", nullptr));
        refreshBooksTable->setText(QCoreApplication::translate("admindashboard", "Refresh", nullptr));
        pushButton_3->setText(QCoreApplication::translate("admindashboard", "Delete Book", nullptr));
        admindashboard->setTabText(admindashboard->indexOf(tab_2), QCoreApplication::translate("admindashboard", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admindashboard: public Ui_admindashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDASHBOARD_H
