/*---------------------------*/
/*------- MyNumber.cpp ------*/
/*---------------------------*/

#include "MyNumber.h"

// constructor
MyNumber::MyNumber (QWidget *parent): QLCDNumber(parent)
{
	// Initialize the attributes if needed
}

// implement slots
void MyNumber::setSliderValue(int n)
{
	if (n == 0)
	{
		//posar color a verd
		this->setStyleSheet("color: green");
	}
	else if (n%2 == 0)	//parell
	{
		//posar color a blau
		this->setStyleSheet("color: blue");
	}
	else //imparell
    {
        // posar color a vermell
		this->setStyleSheet("color: red");
    }
	display(n);
}
void MyNumber::setResetValue()
{
	//posar color a verd
	this->setStyleSheet("color: green");
	display(0);
}
