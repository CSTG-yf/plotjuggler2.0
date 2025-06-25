/****************************************************************************
** Meta object code from reading C++ file 'plot_docker_toolbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../plotjuggler_app/plot_docker_toolbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plot_docker_toolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DockToolbar_t {
    QByteArrayData data[9];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DockToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DockToolbar_t qt_meta_stringdata_DockToolbar = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DockToolbar"
QT_MOC_LITERAL(1, 12, 22), // "backgroundColorRequest"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "name"
QT_MOC_LITERAL(4, 41, 12), // "titleChanged"
QT_MOC_LITERAL(5, 54, 5), // "title"
QT_MOC_LITERAL(6, 60, 20), // "on_stylesheetChanged"
QT_MOC_LITERAL(7, 81, 5), // "theme"
QT_MOC_LITERAL(8, 87, 27) // "on_buttonBackground_clicked"

    },
    "DockToolbar\0backgroundColorRequest\0\0"
    "name\0titleChanged\0title\0on_stylesheetChanged\0"
    "theme\0on_buttonBackground_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DockToolbar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       8,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void DockToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockToolbar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backgroundColorRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->titleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_stylesheetChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_buttonBackground_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockToolbar::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockToolbar::backgroundColorRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockToolbar::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockToolbar::titleChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DockToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DockToolbar.data,
    qt_meta_data_DockToolbar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DockToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DockToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DockToolbar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DockToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DockToolbar::backgroundColorRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DockToolbar::titleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
