#ifndef CLOCKSTATLIB_H
#define CLOCKSTATLIB_H
#include <QWidget>

class ClockStatLib:public QWidget
{
    Q_OBJECT
public:
    ClockStatLib(QWidget *parent = nullptr);

protected:
   void paintEvent(QPaintEvent *event)override ;

};

#endif // CLOCKSTATLIB_H
