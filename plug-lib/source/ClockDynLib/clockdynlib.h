#ifndef CLOCKDYNLIB_H
#define CLOCKDYNLIB_H

#include "ClockDynLib_global.h"
#include <QWidget>
class CLOCKDYNLIB_EXPORT ClockDynLib: public QWidget
{
    Q_OBJECT
public:

    ClockDynLib(QWidget *parent = nullptr);

protected:
   void paintEvent(QPaintEvent *event) override;
};

#endif // CLOCKDYNLIB_H
