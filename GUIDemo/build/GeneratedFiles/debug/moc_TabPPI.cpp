/****************************************************************************
** Meta object code from reading C++ file 'TabPPI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../TabPPI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TabPPI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tQPPIFrame_t {
    QByteArrayData data[4];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tQPPIFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tQPPIFrame_t qt_meta_stringdata_tQPPIFrame = {
    {
QT_MOC_LITERAL(0, 0, 10), // "tQPPIFrame"
QT_MOC_LITERAL(1, 11, 16), // "ChangeTrailsTime"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 4) // "secs"

    },
    "tQPPIFrame\0ChangeTrailsTime\0\0secs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tQPPIFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void tQPPIFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tQPPIFrame *_t = static_cast<tQPPIFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ChangeTrailsTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (tQPPIFrame::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tQPPIFrame::ChangeTrailsTime)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject tQPPIFrame::staticMetaObject = {
    { &tQCustomFrame::staticMetaObject, qt_meta_stringdata_tQPPIFrame.data,
      qt_meta_data_tQPPIFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tQPPIFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tQPPIFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tQPPIFrame.stringdata0))
        return static_cast<void*>(this);
    return tQCustomFrame::qt_metacast(_clname);
}

int tQPPIFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = tQCustomFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void tQPPIFrame::ChangeTrailsTime(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_tTabPPI_t {
    QByteArrayData data[8];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tTabPPI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tTabPPI_t qt_meta_stringdata_tTabPPI = {
    {
QT_MOC_LITERAL(0, 0, 7), // "tTabPPI"
QT_MOC_LITERAL(1, 8, 13), // "AcquireTarget"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 6), // "sample"
QT_MOC_LITERAL(4, 30, 7), // "degrees"
QT_MOC_LITERAL(5, 38, 13), // "Timer_timeout"
QT_MOC_LITERAL(6, 52, 22), // "Frame_ChangeTrailsTime"
QT_MOC_LITERAL(7, 75, 4) // "secs"

    },
    "tTabPPI\0AcquireTarget\0\0sample\0degrees\0"
    "Timer_timeout\0Frame_ChangeTrailsTime\0"
    "secs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tTabPPI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   34,    2, 0x08 /* Private */,
       6,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void tTabPPI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tTabPPI *_t = static_cast<tTabPPI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AcquireTarget((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->Timer_timeout(); break;
        case 2: _t->Frame_ChangeTrailsTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (tTabPPI::*_t)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tTabPPI::AcquireTarget)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject tTabPPI::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tTabPPI.data,
      qt_meta_data_tTabPPI,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tTabPPI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tTabPPI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tTabPPI.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tTabPPI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void tTabPPI::AcquireTarget(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
