#ifndef CLOCK_H
#define CLOCK_H

#include "clock_global.h"
#include <QWidget>
class CLOCK_EXPORT MyAnalogClock: public QWidget
{
    Q_OBJECT
public:
    MyAnalogClock(QWidget *parent = nullptr);

protected:
   void paintEvent(QPaintEvent *event) override;

};

#endif // CLOCK_H
