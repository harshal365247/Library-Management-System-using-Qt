#ifndef REMOVESTUDENTDIALOG_H
#define REMOVESTUDENTDIALOG_H

#include <QDialog>

namespace Ui {
class removestudentdialog;
}

class removestudentdialog : public QDialog
{
    Q_OBJECT

public:
    explicit removestudentdialog(QWidget *parent = nullptr);
    ~removestudentdialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::removestudentdialog *ui;
};

#endif // REMOVESTUDENTDIALOG_H
