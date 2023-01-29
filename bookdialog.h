#ifndef BOOKDIALOG_H
#define BOOKDIALOG_H

#include <QDialog>

namespace Ui {
class bookdialog;
}

class bookdialog : public QDialog
{
    Q_OBJECT

public:
    explicit bookdialog(QWidget *parent = nullptr);
    ~bookdialog();

private:
    Ui::bookdialog *ui;
};

#endif // BOOKDIALOG_H
