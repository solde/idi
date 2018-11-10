/*---------------------------*/
/*------ MyLineEdit.cpp -----*/
/*---------------------------*/

#include "MyLineEdit.h"

// constructor
MyLineEdit::MyLineEdit (QWidget *parent): QLineEdit(parent)
{
	// Initialize the attributes if needed
}

// implement slots
void MyLineEdit::processReturn ()
{
	// Implement processReturn()
	emit sendText (text());	
}
