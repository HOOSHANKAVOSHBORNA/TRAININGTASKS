#include "staticlibclock.h"
#include "staticlibclockplugin.h"

#include <QtPlugin>

staticlibclockPlugin::staticlibclockPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void staticlibclockPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool staticlibclockPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *staticlibclockPlugin::createWidget(QWidget *parent)
{
    return new staticlibclock(parent);
}

QString staticlibclockPlugin::name() const
{
    return QLatin1String("staticlibclock");
}

QString staticlibclockPlugin::group() const
{
    return QLatin1String("Display Widgets [Examples]");
}

QIcon staticlibclockPlugin::icon() const
{
    return QIcon();
}

QString staticlibclockPlugin::toolTip() const
{
    return QLatin1String("");
}

QString staticlibclockPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool staticlibclockPlugin::isContainer() const
{
    return false;
}

QString staticlibclockPlugin::domXml() const
{
    return QLatin1String("<ui language=\"c++\">\n"
                         " <widget class=\"staticlibclock\" name=\"staticlibclock\">\n"

                         "  <property name=\"geometry\">\n"
                         "   <rect>\n"
                         "    <x>0</x>\n"
                         "    <y>0</y>\n"
                         "    <width>100</width>\n"
                         "    <height>100</height>\n"
                         "   </rect>\n"
                         "  </property>\n"

                         "  <property name=\"toolTip\" >\n"
                         "   <string>The current time</string>\n"
                         "  </property>\n"
                         "  <property name=\"whatsThis\" >\n"
                         "   <string>The analog clock widget displays the current time.</string>\n"
                         "  </property>\n"
                         " </widget>\n"
                         "</ui>\n");
}

QString staticlibclockPlugin::includeFile() const
{
    return QLatin1String("staticlibclock.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(staticlibclockplugin, staticlibclockPlugin)
#endif // QT_VERSION < 0x050000
