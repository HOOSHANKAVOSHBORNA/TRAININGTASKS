#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clockdynlib.h"
#include <clockstaticlib.h>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MyAnalogClock* m = new MyAnalogClock;
    ClockStaticLib* y = new ClockStaticLib;

    ui->gridLayout->addWidget(m,1,1);
    ui->gridLayout->addWidget(y,0,0);


}

MainWindow::~MainWindow()
{
    delete ui;
}

