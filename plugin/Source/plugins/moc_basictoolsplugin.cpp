/****************************************************************************
** Meta object code from reading C++ file 'basictoolsplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "basictools/basictoolsplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'basictoolsplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BasicToolsPlugin_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BasicToolsPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BasicToolsPlugin_t qt_meta_stringdata_BasicToolsPlugin = {
    {
QT_MOC_LITERAL(0, 0, 16) // "BasicToolsPlugin"

    },
    "BasicToolsPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BasicToolsPlugin[] = {

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

void BasicToolsPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BasicToolsPlugin::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_BasicToolsPlugin.data,
    qt_meta_data_BasicToolsPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BasicToolsPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BasicToolsPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BasicToolsPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BrushInterface"))
        return static_cast< BrushInterface*>(this);
    if (!strcmp(_clname, "ShapeInterface"))
        return static_cast< ShapeInterface*>(this);
    if (!strcmp(_clname, "FilterInterface"))
        return static_cast< FilterInterface*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.Examples.PlugAndPaint.BrushInterface/1.0"))
        return static_cast< BrushInterface*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.Examples.PlugAndPaint.ShapeInterface/1.0"))
        return static_cast< ShapeInterface*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.Examples.PlugAndPaint.FilterInterface/1.0"))
        return static_cast< FilterInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int BasicToolsPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0x02,  0x78,  0x36,  'o',  'r',  'g',  '.',  'q', 
    't',  '-',  'p',  'r',  'o',  'j',  'e',  'c', 
    't',  '.',  'Q',  't',  '.',  'E',  'x',  'a', 
    'm',  'p',  'l',  'e',  's',  '.',  'P',  'l', 
    'u',  'g',  'A',  'n',  'd',  'P',  'a',  'i', 
    'n',  't',  '.',  'B',  'r',  'u',  's',  'h', 
    'I',  'n',  't',  'e',  'r',  'f',  'a',  'c', 
    'e', 
    // "className"
    0x03,  0x70,  'B',  'a',  's',  'i',  'c',  'T', 
    'o',  'o',  'l',  's',  'P',  'l',  'u',  'g', 
    'i',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(BasicToolsPlugin, BasicToolsPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
