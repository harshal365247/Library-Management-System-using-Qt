#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include <QMessageBox>
#include <student.h>
#include <QSettings>
#include <QSqlDatabase>

namespace Ui {
class signup;
}

class signup : public QWidget
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    QMessageBox *errorBox ;
    ~signup();

private slots:
    void on_submitButton_clicked();
    void on_backButton_clicked();

signals:
    void setCurrentWidget(int);

private:
    Ui::signup *ui;
};

#endif // SIGNUP_H
