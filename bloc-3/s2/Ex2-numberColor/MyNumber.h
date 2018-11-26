/*---------------------------*/
/*-------- MyNumber.h -------*/
/*---------------------------*/

#include <QLCDNumber>

class MyNumber: public QLCDNumber
{
	Q_OBJECT
	public:
		MyNumber (QWidget *parent);

	public
		slots:
			void setSliderValue(int n);
			void setResetValue();	
};
