#include "student.h"

student::student(){

}

student::student(QString name,  QString course, QString branch,QString password)
{
    this->name = name ;
    this->course = course ;
    this->branch = branch ;
    this->password = password ;
}

QString student::getName()
{
    return this->name ;
}

QString student::getPassword()
{
    return this->password ;
}
