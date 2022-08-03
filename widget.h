#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_btnClean_clicked();

    void on_btn7_clicked();

    void on_btn8_clicked();

    void on_btn9_clicked();

    void on_btn4_clicked();

    void on_btn5_clicked();

    void on_btn6_clicked();

    void on_btn1_clicked();

    void on_btn2_clicked();

    void on_btn3_clicked();

    void on_btn0_clicked();

    void on_btnDivide_clicked();

    void on_btnMultiply_clicked();

    void on_btnSubtract_clicked();

    void on_btnAdd_clicked();

    void on_btnAmount_clicked();

private:
    Ui::Widget *ui;

    double sum;

    void judgeSymbols();

    int symbol;

    QString intNumber;

    double number;
};

#endif // WIDGET_H
