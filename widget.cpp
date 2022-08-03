#include "widget.h"
#include "ui_widget.h"
#include <QtMath>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    sum=0;
    number=0;
    symbol=0;
    intNumber.clear();
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_btnClean_clicked()
{
    ui->btnAdd->setEnabled(true);
    ui->btnAmount->setEnabled(true);
    ui->btnSubtract->setEnabled(true);
    ui->btnMultiply->setEnabled(true);
    ui->btnDivide->setEnabled(true);
    ui->lineEdit->clear();
    sum=0;
    number=0;
    symbol=0;
    intNumber.clear();
}

void Widget::on_btn7_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"7");
    intNumber.append("7");
}

void Widget::on_btn8_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"8");
    intNumber.append("8");

}

void Widget::on_btn9_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"9");
    intNumber.append("9");

}

void Widget::on_btn4_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"4");
    intNumber.append("4");

}

void Widget::on_btn5_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"5");
    intNumber.append("5");

}

void Widget::on_btn6_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"6");
    intNumber.append("6");

}

void Widget::on_btn1_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"1");
    intNumber.append("1");

}

void Widget::on_btn2_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"2");
    intNumber.append("2");

}

void Widget::on_btn3_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"3");
    intNumber.append("3");

}

void Widget::on_btn0_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"0");
    intNumber.append("0");

}

void Widget::on_btnDivide_clicked()
{
    judgeSymbols();
    ui->lineEdit->setText(ui->lineEdit->text()+"/");
    symbol=4;
    intNumber.clear();
}

void Widget::on_btnMultiply_clicked()
{
    judgeSymbols();
    ui->lineEdit->setText(ui->lineEdit->text()+"*");
    symbol=3;
    intNumber.clear();
}

void Widget::on_btnSubtract_clicked()
{
    judgeSymbols();
    ui->lineEdit->setText(ui->lineEdit->text()+"-");
    symbol=2;
    intNumber.clear();
}

void Widget::on_btnAdd_clicked()
{
    judgeSymbols();
    ui->lineEdit->setText(ui->lineEdit->text()+"+");
    symbol=1;
    intNumber.clear();
}

void Widget::on_btnAmount_clicked()
{
    judgeSymbols();
    int temp=(int)sum;

    if((double)temp==sum)
        ui->lineEdit->setText(ui->lineEdit->text()+"="+QString::asprintf("%d",(int)sum));
    else
        ui->lineEdit->setText(ui->lineEdit->text()+"="+QString::asprintf("%f",sum));
    ui->btnAdd->setEnabled(false);
    ui->btnAmount->setEnabled(false);
    ui->btnSubtract->setEnabled(false);//
    ui->btnMultiply->setEnabled(false);
    ui->btnDivide->setEnabled(false);

}


void Widget::judgeSymbols()
{
    number=(double)(intNumber.toInt());
    switch (symbol) {
    case 0:
        sum=number;
        break;
    case 1:
        sum+=number;
        break;
    case 2:
        sum-=number;
        break;
    case 3:
        sum*=number;
        break;
    case 4:
        sum/=number;
        break;
    default:
        break;
    }
}
