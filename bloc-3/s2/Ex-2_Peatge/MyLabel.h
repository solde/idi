#include <QLabel>

class MyLabel:public QLabel
{
    Q_OBJECT
    public:
        MyLabel(QWidget *parent);


    public
        slots:
            void incrementOne();
            void incrementFour();
            void changeColorRed();
            void changeColorGreen();

};
