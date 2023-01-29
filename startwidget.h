#ifndef STARTWIDGET_H
#define STARTWIDGET_H

#include <QWidget>

namespace Ui {
class startWidget;
}

class startWidget : public QWidget
{
    Q_OBJECT

public:
    explicit startWidget(QWidget *parent = nullptr);
    void createBooksTable() ;
    void setShadow() ;
    ~startWidget();

signals :
    void setCurrentWidget(int);

private slots:
    void on_signupButton_clicked();
    void on_loginButton_clicked();

private:
    Ui::startWidget *ui;

};

#endif // STARTWIDGET_H
