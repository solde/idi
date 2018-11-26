/*---------------------------*/
/*-------- MyNumber.h -------*/
/*---------------------------*/

#include <QLCDNumber>

class MyNumber: public QLCDNumber
{
	Q_OBJECT
	public:
		MyNumber (QWidget *parent);
		int Op1, Op2;
		bool b_abs = false;
		char op;

	public
		slots:
			void setOp1(int n);
			void setOp2(int n);
			void Sum();
			void Sub();
			void Mult();
			void Div();
			void setAbs(bool p);
			void Acumulate();
			void Reset();
			void Calculate();
};
