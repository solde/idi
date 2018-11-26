#include "MyLabel.h"

MyLabel::MyLabel(QWidget *parent = 0):QLabel(parent)
{
}

void MyLabel::incrementOne()
{
    QString str = text();
    int i = str.split(" ")[0].toInt();  // convert QString to int
    ++i;
    str = QString::number(i);     // convert int to QString
    setText(str);
}

void MyLabel::incrementFour()
{
    QString str = text();
    int i = str.split(" ")[0].toInt();  // convert QString to int
    i += 4;
    str = QString::number(i);     // convert int to QString
    setText(str);
}

void MyLabel::changeColorRed()
{
    this->setStyleSheet("background-color: #9a031e; color: white;");
}

void MyLabel::changeColorGreen()
{
    this->setStyleSheet("background-color: #8ea604; color: black;");
}
