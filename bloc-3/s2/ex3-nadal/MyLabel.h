/*---------------------------*/
/*-------- MyLabel.h --------*/
/*---------------------------*/

#include <QLabel>
#include <QPushButton>
#include <cstdlib>
#include <time.h>

class MyLabel:public QLabel
{
	Q_OBJECT
	public:
		MyLabel (QWidget *parent);
	public 
		slots:
			void setTextUpper (QString);
			void MyTruncate (int);
};


class MyButton:public QPushButton
{
	Q_OBJECT
	public:
		MyButton (QWidget *parent){
			char hex[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
			srand(time(NULL));
			string str = "backgorund-color: #";
			for(int i = 0; i < 6; i++) str.push_back(hex[rand() % 16]);
			setStyleSheet(str);
		}
	public 
		slots:
			void setTextUpper (QString);
			void MyTruncate (int);
};