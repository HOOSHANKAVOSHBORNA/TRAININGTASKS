#ifndef CLOCK_H
#define CLOCK_H

#include "clock_global.h"
#include <QWidget>
class CLOCK_EXPORT My_analog_clock: public QWidget
{
    Q_OBJECT
public:
    My_analog_clock(QWidget *parent = nullptr);

protected:
   void paintEvent(QPaintEvent *event) override;

};

#endif // CLOCK_H
