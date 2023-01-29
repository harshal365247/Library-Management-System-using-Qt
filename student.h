#ifndef STUDENT_H
#define STUDENT_H
#include <QString>
#include <QMetaType>

class student
{
private:
    QString name ;
    QString course ;
    QString branch ;
    QString password ;

public:
    student();
    student(QString name,  QString course, QString branch,QString password);
    QString getName();
    QString getPassword();
};

Q_DECLARE_METATYPE(student);

#endif // STUDENT_H
