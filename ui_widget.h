/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *btn9;
    QPushButton *btn7;
    QPushButton *btn4;
    QPushButton *btn8;
    QPushButton *btnClean;
    QLineEdit *lineEdit;
    QPushButton *btnMultiply;
    QPushButton *btnDivide;
    QPushButton *btn5;
    QPushButton *btn1;
    QPushButton *btn6;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn0;
    QPushButton *btnSubtract;
    QPushButton *btnAmount;
    QPushButton *btnAdd;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(524, 249);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btn9 = new QPushButton(Widget);
        btn9->setObjectName(QStringLiteral("btn9"));

        gridLayout->addWidget(btn9, 2, 2, 1, 1);

        btn7 = new QPushButton(Widget);
        btn7->setObjectName(QStringLiteral("btn7"));

        gridLayout->addWidget(btn7, 2, 0, 1, 1);

        btn4 = new QPushButton(Widget);
        btn4->setObjectName(QStringLiteral("btn4"));

        gridLayout->addWidget(btn4, 3, 0, 1, 1);

        btn8 = new QPushButton(Widget);
        btn8->setObjectName(QStringLiteral("btn8"));

        gridLayout->addWidget(btn8, 2, 1, 1, 1);

        btnClean = new QPushButton(Widget);
        btnClean->setObjectName(QStringLiteral("btnClean"));

        gridLayout->addWidget(btnClean, 1, 0, 1, 1);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(200);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(500, 50));
        lineEdit->setMaximumSize(QSize(500, 50));
        lineEdit->setSizeIncrement(QSize(100, 200));
        lineEdit->setBaseSize(QSize(200, 200));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lineEdit, 0, 0, 1, 4);

        btnMultiply = new QPushButton(Widget);
        btnMultiply->setObjectName(QStringLiteral("btnMultiply"));

        gridLayout->addWidget(btnMultiply, 1, 2, 1, 1);

        btnDivide = new QPushButton(Widget);
        btnDivide->setObjectName(QStringLiteral("btnDivide"));

        gridLayout->addWidget(btnDivide, 1, 1, 1, 1);

        btn5 = new QPushButton(Widget);
        btn5->setObjectName(QStringLiteral("btn5"));

        gridLayout->addWidget(btn5, 3, 1, 1, 1);

        btn1 = new QPushButton(Widget);
        btn1->setObjectName(QStringLiteral("btn1"));

        gridLayout->addWidget(btn1, 4, 0, 1, 1);

        btn6 = new QPushButton(Widget);
        btn6->setObjectName(QStringLiteral("btn6"));

        gridLayout->addWidget(btn6, 3, 2, 1, 1);

        btn2 = new QPushButton(Widget);
        btn2->setObjectName(QStringLiteral("btn2"));

        gridLayout->addWidget(btn2, 4, 1, 1, 1);

        btn3 = new QPushButton(Widget);
        btn3->setObjectName(QStringLiteral("btn3"));

        gridLayout->addWidget(btn3, 4, 2, 1, 1);

        btn0 = new QPushButton(Widget);
        btn0->setObjectName(QStringLiteral("btn0"));

        gridLayout->addWidget(btn0, 4, 3, 1, 1);

        btnSubtract = new QPushButton(Widget);
        btnSubtract->setObjectName(QStringLiteral("btnSubtract"));

        gridLayout->addWidget(btnSubtract, 1, 3, 1, 1);

        btnAmount = new QPushButton(Widget);
        btnAmount->setObjectName(QStringLiteral("btnAmount"));

        gridLayout->addWidget(btnAmount, 3, 3, 1, 1);

        btnAdd = new QPushButton(Widget);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));

        gridLayout->addWidget(btnAdd, 2, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\350\256\241\347\256\227\345\231\250", Q_NULLPTR));
        btn9->setText(QApplication::translate("Widget", "9", Q_NULLPTR));
        btn7->setText(QApplication::translate("Widget", "7", Q_NULLPTR));
        btn4->setText(QApplication::translate("Widget", "4", Q_NULLPTR));
        btn8->setText(QApplication::translate("Widget", "8", Q_NULLPTR));
        btnClean->setText(QApplication::translate("Widget", "C", Q_NULLPTR));
        btnMultiply->setText(QApplication::translate("Widget", "*", Q_NULLPTR));
        btnDivide->setText(QApplication::translate("Widget", "/", Q_NULLPTR));
        btn5->setText(QApplication::translate("Widget", "5", Q_NULLPTR));
        btn1->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        btn6->setText(QApplication::translate("Widget", "6", Q_NULLPTR));
        btn2->setText(QApplication::translate("Widget", "2", Q_NULLPTR));
        btn3->setText(QApplication::translate("Widget", "3", Q_NULLPTR));
        btn0->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        btnSubtract->setText(QApplication::translate("Widget", "-", Q_NULLPTR));
        btnAmount->setText(QApplication::translate("Widget", "=", Q_NULLPTR));
        btnAdd->setText(QApplication::translate("Widget", "+", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
