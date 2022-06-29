#ifndef CLOCKSTATICLIB_H
#define CLOCKSTATICLIB_H
#include <QWidget>


class ClockStaticLib: public QWidget
{
    Q_OBJECT

public:
    ClockStaticLib(QWidget *parent = nullptr);

protected:
   void paintEvent(QPaintEvent *event) override;
};

#endif // CLOCKSTATICLIB_H
