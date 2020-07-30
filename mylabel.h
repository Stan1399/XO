#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>

class MyLabel : public QLabel
{
    Q_OBJECT
    int step = 1;
public:
    MyLabel(QWidget *parent = nullptr);

public slots:
    void inc_step();
};

#endif // MYLABEL_H
