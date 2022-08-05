#include "widget.h"
#include "ui_widget.h"
#include <QtMath>
#include <QStack>
#include <QString>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QObject::connect(ui->btnAmount,SIGNAL(clicked()),this,SLOT(pushStack()));
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
    ui->btn0->setEnabled(true);
    ui->btn1->setEnabled(true);
    ui->btn2->setEnabled(true);
    ui->btn3->setEnabled(true);
    ui->btn4->setEnabled(true);
    ui->btn5->setEnabled(true);
    ui->btn6->setEnabled(true);
    ui->btn7->setEnabled(true);
    ui->btn8->setEnabled(true);
    ui->btn9->setEnabled(true);

}

void Widget::on_btn7_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"7");
}

void Widget::on_btn8_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"8");
}

void Widget::on_btn9_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"9");
}

void Widget::on_btn4_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"4");
}

void Widget::on_btn5_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"5");
}

void Widget::on_btn6_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"6");
}

void Widget::on_btn1_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"1");
}

void Widget::on_btn2_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"2");
}

void Widget::on_btn3_clicked()
{    
    ui->lineEdit->setText(ui->lineEdit->text()+"3");
}

void Widget::on_btn0_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"0");
}

void Widget::on_btnDivide_clicked()
{

    ui->lineEdit->setText(ui->lineEdit->text()+"/");
}

void Widget::on_btnMultiply_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"*");
}

void Widget::on_btnSubtract_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"-");
}
void Widget::on_btnAdd_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"+");
}
void Widget::on_btnAmount_clicked()
{
    //int temp=(int)sum;
    //if((double)temp==sum)
    //    ui->lineEdit->setText(ui->lineEdit->text()+"="+QString::asprintf("%d",(int)sum));
    //else
    //    ui->lineEdit->setText(ui->lineEdit->text()+"="+QString::asprintf("%f",sum));
    ui->lineEdit->setText(ui->lineEdit->text()+"=");
    ui->btnAdd->setEnabled(false);
    ui->btnAmount->setEnabled(false);
    ui->btnSubtract->setEnabled(false);
    ui->btnMultiply->setEnabled(false);
    ui->btnDivide->setEnabled(false);
    ui->btn0->setEnabled(false);
    ui->btn1->setEnabled(false);
    ui->btn2->setEnabled(false);
    ui->btn3->setEnabled(false);
    ui->btn4->setEnabled(false);
    ui->btn5->setEnabled(false);
    ui->btn6->setEnabled(false);
    ui->btn7->setEnabled(false);
    ui->btn8->setEnabled(false);
    ui->btn9->setEnabled(false);

}
void Widget::pushStack()
{
    QStack <QString> signalStack;
    QList <QString> houzhui;
    QString text=ui->lineEdit->text();
    QString txt;
    QStack <double> doubleStack;
    double temp;
    double sum;
    for(int i=0;i<text.length();i++){
        txt=text.at(i);
        if(i==text.length()-1)
        {
            while((!signalStack.isEmpty())&&(signalStack.top()=="/"||signalStack.top()=="*"
                  ||signalStack.top()=="+"||signalStack.top()=="-"))
            {
                houzhui.append(signalStack.pop());

            }
        }
        if(txt=="=")
        {
           for(int i=0;i<houzhui.count();i++)
           {
               if(houzhui.at(i)>="0"&&houzhui.at(i)<="9")
                   doubleStack.push((houzhui.at(i).toDouble()));
               else
               {
                   int flag=judgeSymbol(houzhui.at(i));
                   switch (flag) {
                   case 1:
                       temp=doubleStack.pop();
                       sum=temp+doubleStack.pop();
                       doubleStack.push(sum);
                       break;
                   case 2:
                       temp=doubleStack.pop();
                       sum=doubleStack.pop()-temp;
                       doubleStack.push(sum);
                       break;
                   case 3:
                       temp=doubleStack.pop();
                       sum=temp*doubleStack.pop();
                       doubleStack.push(sum);
                       break;
                   case 4:
                       temp=doubleStack.pop();
                       sum=doubleStack.pop()/temp;
                       doubleStack.push(sum);
                       break;
                   default:
                       break;
                   }
               }
           }
           int temp=(int)sum;
           if((double)temp==sum)
               ui->lineEdit->setText(text+QString::asprintf("%d",(int)sum));
           else
               ui->lineEdit->setText(text+QString::asprintf("%f",sum));
        }
        else if(txt>="0"&&txt<="9")
        {
            houzhui.append(txt);
        }
        else if(txt<"0"||txt>"9"){
            if(i==1)
            {
                signalStack.push(txt);
            }
            else{
                int symbol=judgeSymbol(txt);
                switch (symbol) {
                case 1:
                {
                    while((!signalStack.isEmpty())&&(signalStack.top()=="/"||signalStack.top()=="*"
                                                     ||signalStack.top()=="+"||signalStack.top()=="-"))
                    {
                        houzhui.append(signalStack.pop());
                    }
                    signalStack.push("+");
                    break;
                }
                case 2:
                {
                    while((!signalStack.isEmpty())&&(signalStack.top()=="/"||signalStack.top()=="*"
                                                     ||signalStack.top()=="+"||signalStack.top()=="-"))
                    {
                        houzhui.append(signalStack.pop());
                    }
                    signalStack.push("-");
                    break;
                }
                case 3:
                {
                    while((!signalStack.isEmpty())&&(signalStack.top()=="/"||signalStack.top()=="*"))
                    {
                        houzhui.append(signalStack.pop());
                    }
                    signalStack.push("*");
                    break;
                }
                case 4:
                {
                    while((!signalStack.isEmpty())&&(signalStack.top()=="/"||signalStack.top()=="*"))
                    {
                        houzhui.append(signalStack.pop());

                    }
                    signalStack.push("/");
                    break;
                }
                default:
                    break;
                }
            }
        }
    }

}

int Widget::judgeSymbol(QString txt)
{

    if(txt=="+")
        return 1;
    else if(txt=="-")
        return 2;
    else if(txt=="*")
        return 3;
    else if(txt=="/")
        return 4;
}
