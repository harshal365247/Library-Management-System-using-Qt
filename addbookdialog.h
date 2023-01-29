#ifndef ADDBOOKDIALOG_H
#define ADDBOOKDIALOG_H

#include <QDialog>

namespace Ui {
class addBookDialog;
}

class addBookDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addBookDialog(QWidget *parent = nullptr);
    ~addBookDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::addBookDialog *ui;


};

#endif // ADDBOOKDIALOG_H
