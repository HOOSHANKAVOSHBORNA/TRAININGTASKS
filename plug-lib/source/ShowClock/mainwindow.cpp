#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPluginLoader>
#include <clockdynlib.h>
#include <clockstatlib.h>
#include <QDir>
#include <Interface.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ClockDynLib* dynLib = new ClockDynLib;
    ClockStatLib* statLib = new ClockStatLib;

    LoadPlugin();
    ui->gridLayout_2->addWidget(dynLib,0,0);
    ui->gridLayout_2->addWidget(statLib,0,1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::LoadPlugin()
{
    const auto staticInstances = QPluginLoader::staticInstances();
    for (QObject *plugin1 : staticInstances){
        auto iClock = qobject_cast<QDesignerCustomWidgetInterface *>(plugin1);
        QWidget* StatPlugin = iClock->createWidget(nullptr);
        ui->gridLayout_2->addWidget(StatPlugin,0,2);
    }
    QDir pluginsDir;
    pluginsDir = QDir(qApp->applicationDirPath());
    pluginsDir.cd("..");
    pluginsDir.cd("DynPlugClock");
    const auto entryList = pluginsDir.entryList(QDir::Files);
    for (const QString &fileName : entryList) {
        QPluginLoader loader(pluginsDir.absoluteFilePath(fileName));
        QObject *plugin = loader.instance();
        if(plugin){
            auto iClock2 = qobject_cast<QDesignerCustomWidgetInterface *>(plugin);
            QWidget* DynPlugin = iClock2->createWidget(nullptr);
            ui->gridLayout_2->addWidget(DynPlugin,0,3);
        }

}}
