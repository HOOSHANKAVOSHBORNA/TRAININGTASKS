/****************************************************************************
** Meta object code from reading C++ file 'extrafiltersplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../extrafilters/extrafiltersplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extrafiltersplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExtraFiltersPlugin_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtraFiltersPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtraFiltersPlugin_t qt_meta_stringdata_ExtraFiltersPlugin = {
    {
QT_MOC_LITERAL(0, 0, 18) // "ExtraFiltersPlugin"

    },
    "ExtraFiltersPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtraFiltersPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ExtraFiltersPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ExtraFiltersPlugin::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ExtraFiltersPlugin.data,
    qt_meta_data_ExtraFiltersPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExtraFiltersPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtraFiltersPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExtraFiltersPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FilterInterface"))
        return static_cast< FilterInterface*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.Examples.PlugAndPaint.FilterInterface/1.0"))
        return static_cast< FilterInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int ExtraFiltersPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x37,  'o',  'r',  'g',  '.',  'q', 
    't',  '-',  'p',  'r',  'o',  'j',  'e',  'c', 
    't',  '.',  'Q',  't',  '.',  'E',  'x',  'a', 
    'm',  'p',  'l',  'e',  's',  '.',  'P',  'l', 
    'u',  'g',  'A',  'n',  'd',  'P',  'a',  'i', 
    'n',  't',  '.',  'F',  'i',  'l',  't',  'e', 
    'r',  'I',  'n',  't',  'e',  'r',  'f',  'a', 
    'c',  'e', 
    // "className"
    0x03,  0x72,  'E',  'x',  't',  'r',  'a',  'F', 
    'i',  'l',  't',  'e',  'r',  's',  'P',  'l', 
    'u',  'g',  'i',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(ExtraFiltersPlugin, ExtraFiltersPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
