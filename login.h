#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <index.h>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:

    void on_loginButton_clicked();
    void on_backButton_clicked();

signals :
    void setCurrentWidget(int) ;
    void loginSuccessful(QString, QString, QString);
    void passStudentID(int);

private:
    Ui::login *ui;
};

#endif // LOGIN_H
