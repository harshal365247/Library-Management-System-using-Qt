#ifndef SEARCHBOOKS_H
#define SEARCHBOOKS_H

#include <QDialog>

namespace Ui {
class searchBooks;
}

class searchBooks : public QDialog
{
    Q_OBJECT

public:
    explicit searchBooks(QWidget *parent = nullptr);
    ~searchBooks();

private:
    Ui::searchBooks *ui;
};

#endif // SEARCHBOOKS_H
