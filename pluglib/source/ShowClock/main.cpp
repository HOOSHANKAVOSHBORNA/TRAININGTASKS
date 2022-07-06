#include "mainwindow.h"
#include <QtPlugin>
#include <QApplication>

Q_IMPORT_PLUGIN(staticlibclockPlugin)

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();
    return a.exec();
}
