/****************************************************************************
** Meta object code from reading C++ file 'TabBScan.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../TabBScan.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TabBScan.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tQBScanFrame_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tQBScanFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tQBScanFrame_t qt_meta_stringdata_tQBScanFrame = {
    {
QT_MOC_LITERAL(0, 0, 12) // "tQBScanFrame"

    },
    "tQBScanFrame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tQBScanFrame[] = {

 // content:
       7,       // revision
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

void tQBScanFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject tQBScanFrame::staticMetaObject = {
    { &tQCustomFrame::staticMetaObject, qt_meta_stringdata_tQBScanFrame.data,
      qt_meta_data_tQBScanFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tQBScanFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tQBScanFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tQBScanFrame.stringdata0))
        return static_cast<void*>(this);
    return tQCustomFrame::qt_metacast(_clname);
}

int tQBScanFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = tQCustomFrame::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_tTabBScan_t {
    QByteArrayData data[6];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tTabBScan_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tTabBScan_t qt_meta_stringdata_tTabBScan = {
    {
QT_MOC_LITERAL(0, 0, 9), // "tTabBScan"
QT_MOC_LITERAL(1, 10, 13), // "AcquireTarget"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 6), // "sample"
QT_MOC_LITERAL(4, 32, 7), // "degrees"
QT_MOC_LITERAL(5, 40, 13) // "Timer_timeout"

    },
    "tTabBScan\0AcquireTarget\0\0sample\0degrees\0"
    "Timer_timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tTabBScan[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void tTabBScan::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tTabBScan *_t = static_cast<tTabBScan *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AcquireTarget((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->Timer_timeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (tTabBScan::*_t)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tTabBScan::AcquireTarget)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject tTabBScan::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tTabBScan.data,
      qt_meta_data_tTabBScan,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tTabBScan::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tTabBScan::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tTabBScan.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tTabBScan::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void tTabBScan::AcquireTarget(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
