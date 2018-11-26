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
void MyNumber::setOp1(int n)
{
	Op1 = n;
}

void MyNumber::setOp2(int n)
{
	Op2 = n;
}

void MyNumber::Sum()
{
	op = 'S';
}

void MyNumber::Sub()
{
	op = 'R';
}

void MyNumber::Mult()
{
	op = 'M';
}

void MyNumber::Div()
{
	op = 'D';
}

void MyNumber::setAbs(bool p)
{
	b_abs = p;
}

void MyNumber::Acumulate()
{
	int acumulated = intValue();
	if(acumulated > 99 or acumulated < 0)
	{
		display("ERROR");
	}
	Op1 = acumulated;
}

void MyNumber::Reset(){
	Op1 = 0;
	Op2 = 0;
	b_abs = false;
	op = ' ';
	display(0);
}

void MyNumber::Calculate()
{
	int res = 0;
	if(op == 'S')
	{
		res = Op1 + Op2;
	}
	else if(op == 'R')
	{
		res = Op1 - Op2;
	}
	else if(op == 'M')
	{
		res = Op1 * Op2;
	}
	else if(op == 'D')
	{
		res = Op1 / Op2;
	}
	if(b_abs and res < 0) res *= -1;
	display(res);
}