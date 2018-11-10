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
	auto paleto = segmentStyle();
	display(n);
	if (n == 0)
	{
		//posar color a verd
		setColor(paleto, QColor(0, 255, 0, 255));
		setForegroundRole();
	}
	else if (n%2 == 0)	//parell
	{
		//posar color a blau
	}
	else //imparell

}
void MyNumber::setResetValue()
{
	display(0);
	//posar color a verd
}