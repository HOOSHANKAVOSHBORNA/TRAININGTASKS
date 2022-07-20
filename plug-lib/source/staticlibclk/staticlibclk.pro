
QT           += widgets
QTDIR_build {
PLUGIN_TYPE = designer
PLUGIN_CLASS_NAME = staticlibclockplugin
load(qt_plugin)
CONFIG += install_ok
} else {
CONFIG      += plugin static
CONFIG += c++11
TARGET      = $$qtLibraryTarget(staticlibclockplugin)
TEMPLATE    = lib


LIBS        += -L.

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target
}

INCLUDEPATH  += ../ShowClock
HEADERS     = staticlibclockplugin.h
SOURCES     = staticlibclockplugin.cpp
RESOURCES   = icons.qrc
include(staticlibclock.pri)
