/*---------------------------*/
/*------- MyLabel.cpp -------*/
/*---------------------------*/

#include "MyLabel.h"

// constructor
MyLabel::MyLabel (QWidget *parent=0): QLabel (parent) 
{
	// Initialize the attributes if needed
}

// implement slots
void MyLabel::setTextUpper (QString s)
{
	QString str = s.toUpper();
	setText (str);
}

void MyLabel::MyTruncate (int n)
{
	QString str = text();
	str.truncate(n);
	setText (str);
}
