#ifndef RETURNBOOKDIALOG_H
#define RETURNBOOKDIALOG_H

#include <QDialog>

namespace Ui {
class returnbookdialog;
}

class returnbookdialog : public QDialog
{
    Q_OBJECT

public:
    explicit returnbookdialog(QWidget *parent = nullptr);
    ~returnbookdialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::returnbookdialog *ui;
};

#endif // RETURNBOOKDIALOG_H
