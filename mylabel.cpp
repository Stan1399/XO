#include "mylabel.h"
#include <QKeyEvent>

MyLabel::MyLabel(QWidget *parent) : QLabel(parent)
{

}

void MyLabel::inc_step()
{
    step++;
    this->setText(QString::number(step));
}
