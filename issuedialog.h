#ifndef ISSUEDIALOG_H
#define ISSUEDIALOG_H

#include <QDialog>

namespace Ui {
class issueDialog;
}

class issueDialog : public QDialog
{
    Q_OBJECT

public:
    explicit issueDialog(QWidget *parent = nullptr);
    ~issueDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::issueDialog *ui;
};

#endif // ISSUEDIALOG_H
