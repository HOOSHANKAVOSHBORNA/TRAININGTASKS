QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Interface.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

LIBS +=-L../staticlibclk
macx-xcode {
    LIBS += -lstaticlibclockplugin$($${QMAKE_XCODE_LIBRARY_SUFFIX_SETTING})
} else {
    LIBS += -lstaticlibclockplugin
}
CONFIG += install_ok


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

unix:!macx: LIBS += -L$$OUT_PWD/../ClockDynLib/ -lClockDynLib

INCLUDEPATH += $$PWD/../ClockDynLib
DEPENDPATH += $$PWD/../ClockDynLib

unix:!macx: LIBS += -L$$OUT_PWD/../ClockStatLib/ -lClockStatLib

INCLUDEPATH += $$PWD/../ClockStatLib
DEPENDPATH += $$PWD/../ClockStatLib

unix:!macx: PRE_TARGETDEPS += $$OUT_PWD/../ClockStatLib/libClockStatLib.a
