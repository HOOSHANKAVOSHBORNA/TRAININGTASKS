#include "mainwindow.h"
#include "clock.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    My_analog_clock x;
    x.show();
    return a.exec();
}
