/********************************************************************************
** Form generated from reading UI file 'MyForm.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFORM_H
#define UI_MYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MyLabel.h"

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    MyLabel *label;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    MyLabel *label_7;
    MyLabel *label_8;
    MyLabel *label_9;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    MyLabel *label_10;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QStringLiteral("MyForm"));
        MyForm->resize(967, 587);
        verticalLayout_10 = new QVBoxLayout(MyForm);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new MyLabel(MyForm);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(600, 50));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QLatin1String("background-color: #9a031e;\n"
"color: white;"));
        label->setLineWidth(5);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        radioButton_5 = new QRadioButton(MyForm);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu"));
        font1.setPointSize(12);
        radioButton_5->setFont(font1);

        verticalLayout_7->addWidget(radioButton_5);

        radioButton_4 = new QRadioButton(MyForm);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setFont(font1);
        radioButton_4->setChecked(true);

        verticalLayout_7->addWidget(radioButton_4);


        horizontalLayout_4->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(17, 17, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_8->addItem(verticalSpacer_3);


        verticalLayout_9->addLayout(verticalLayout_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        radioButton = new QRadioButton(MyForm);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setEnabled(false);
        radioButton->setFont(font1);
        radioButton->setText(QString::fromUtf8("Cot&xe ( 1\342\202\254 )"));

        verticalLayout_6->addWidget(radioButton);

        radioButton_2 = new QRadioButton(MyForm);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setEnabled(false);
        radioButton_2->setFont(font1);

        verticalLayout_6->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(MyForm);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setEnabled(false);
        radioButton_3->setFont(font1);

        verticalLayout_6->addWidget(radioButton_3);


        horizontalLayout_5->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_2 = new QLabel(MyForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font2;
        font2.setFamily(QStringLiteral("Ubuntu"));
        font2.setPointSize(14);
        label_2->setFont(font2);

        verticalLayout_4->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(MyForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(MyForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(MyForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        verticalLayout_2->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_7 = new MyLabel(MyForm);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        verticalLayout->addWidget(label_7);

        label_8 = new MyLabel(MyForm);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        verticalLayout->addWidget(label_8);

        label_9 = new MyLabel(MyForm);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        verticalLayout->addWidget(label_9);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(MyForm);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);

        horizontalLayout_3->addWidget(label_6);

        label_10 = new MyLabel(MyForm);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        horizontalLayout_3->addWidget(label_10);


        verticalLayout_5->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_5);


        verticalLayout_9->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_9);

        horizontalSpacer_3 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_10->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        pushButton = new QPushButton(MyForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_3->addWidget(pushButton);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_10->addLayout(horizontalLayout_2);


        retranslateUi(MyForm);
        QObject::connect(pushButton, SIGNAL(clicked()), MyForm, SLOT(close()));
        QObject::connect(radioButton_4, SIGNAL(clicked(bool)), radioButton_2, SLOT(setDisabled(bool)));
        QObject::connect(radioButton_4, SIGNAL(clicked(bool)), radioButton_3, SLOT(setDisabled(bool)));
        QObject::connect(radioButton_5, SIGNAL(clicked(bool)), radioButton_2, SLOT(setEnabled(bool)));
        QObject::connect(radioButton_5, SIGNAL(clicked(bool)), radioButton_3, SLOT(setEnabled(bool)));
        QObject::connect(radioButton_4, SIGNAL(clicked(bool)), radioButton, SLOT(setDisabled(bool)));
        QObject::connect(radioButton_5, SIGNAL(clicked(bool)), radioButton, SLOT(setEnabled(bool)));
        QObject::connect(radioButton_2, SIGNAL(clicked()), label_8, SLOT(incrementOne()));
        QObject::connect(radioButton_3, SIGNAL(clicked()), label_9, SLOT(incrementOne()));
        QObject::connect(radioButton, SIGNAL(clicked()), label_7, SLOT(incrementOne()));
        QObject::connect(radioButton, SIGNAL(clicked()), label_10, SLOT(incrementOne()));
        QObject::connect(radioButton_2, SIGNAL(clicked()), label_10, SLOT(incrementOne()));
        QObject::connect(radioButton_3, SIGNAL(clicked()), label_10, SLOT(incrementFour()));
        QObject::connect(radioButton_5, SIGNAL(clicked()), label, SLOT(changeColorGreen()));
        QObject::connect(radioButton_4, SIGNAL(clicked()), label, SLOT(changeColorRed()));

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QApplication::translate("MyForm", "Peatge autopista", nullptr));
        label->setText(QApplication::translate("MyForm", "Barrera", nullptr));
        radioButton_5->setText(QApplication::translate("MyForm", "Obrir", nullptr));
        radioButton_4->setText(QApplication::translate("MyForm", "&Tancar", nullptr));
        radioButton_2->setText(QApplication::translate("MyForm", "Moto ( &1\342\202\254 )", nullptr));
        radioButton_3->setText(QApplication::translate("MyForm", "Cami\303\263 ( &4\342\202\254 )", nullptr));
        label_2->setText(QApplication::translate("MyForm", "Vehicles:", nullptr));
        label_3->setText(QApplication::translate("MyForm", "Cotxes:", nullptr));
        label_4->setText(QApplication::translate("MyForm", "Motos:", nullptr));
        label_5->setText(QApplication::translate("MyForm", "Camions:", nullptr));
        label_7->setText(QApplication::translate("MyForm", "0", nullptr));
        label_8->setText(QApplication::translate("MyForm", "0", nullptr));
        label_9->setText(QApplication::translate("MyForm", "0", nullptr));
        label_6->setText(QApplication::translate("MyForm", "Recaptaci\303\263 total:", nullptr));
        label_10->setText(QApplication::translate("MyForm", "0", nullptr));
        pushButton->setText(QApplication::translate("MyForm", "Exit", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton->setShortcut(QApplication::translate("MyForm", "Esc", nullptr));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
