#ifndef PLAINWIDGET_H
#define PLAINWIDGET_H

#include <QWidget>

namespace Ui {
class plainwidget;
}

class plainwidget : public QWidget
{
    Q_OBJECT

public:
    explicit plainwidget(QWidget *parent = nullptr);
    ~plainwidget();

private:
    Ui::plainwidget *ui;
};

#endif // PLAINWIDGET_H
