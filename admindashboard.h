#ifndef ADMINDASHBOARD_H
#define ADMINDASHBOARD_H

#include <QTabWidget>

namespace Ui {
class admindashboard;
}

class admindashboard : public QTabWidget
{
    Q_OBJECT

public:
    explicit admindashboard(QWidget *parent = nullptr);
    QTabBar *tabbar ;
    void setBooksTable() ;
    void setShadow() ;
    void setIcons() ;
    ~admindashboard();

private slots:
    void on_addbookButton_clicked();


    void on_searchbookButton_clicked();

    void on_issueButton_clicked();

    void on_pushButton_2_clicked();

    void on_returnBookButton_clicked();

    void on_backButton_clicked();

    void on_searchByName_clicked();

    void on_refreshBooksTable_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::admindashboard *ui;
signals:
    void setCurrentWidget(int);
};

#endif // ADMINDASHBOARD_H
