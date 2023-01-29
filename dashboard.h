#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QTabWidget>
#include <QTabBar>
#include <QTabWidget>
#include <index.h>

namespace Ui {
class dashboard;
}

class dashboard : public QTabWidget
{
    Q_OBJECT

public:
    explicit dashboard(QWidget *parent = nullptr);
    QTabBar *tabBar ;
    void createIssueTable(int student_id) ;
    int student_id ;
    ~dashboard();

private:
    Ui::dashboard *ui;

public slots :
    void setStudentData(QString name, QString course, QString branch) ;
    void receiveStduentID(int student_id);

signals :
    void setCurrentWidget(int) ;
private slots:
    void on_backButton_clicked();
};

#endif // DASHBOARD_H
