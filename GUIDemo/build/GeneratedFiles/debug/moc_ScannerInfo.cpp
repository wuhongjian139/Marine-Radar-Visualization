/****************************************************************************
** Meta object code from reading C++ file 'ScannerInfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ScannerInfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScannerInfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tScannerInfo_t {
    QByteArrayData data[12];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tScannerInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tScannerInfo_t qt_meta_stringdata_tScannerInfo = {
    {
QT_MOC_LITERAL(0, 0, 12), // "tScannerInfo"
QT_MOC_LITERAL(1, 13, 20), // "ScannerPower_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "checked"
QT_MOC_LITERAL(4, 43, 23), // "ScannerTransmit_clicked"
QT_MOC_LITERAL(5, 67, 24), // "ScannerKickRadar_clicked"
QT_MOC_LITERAL(6, 92, 20), // "ScannerQuery_clicked"
QT_MOC_LITERAL(7, 113, 20), // "ScannerError_clicked"
QT_MOC_LITERAL(8, 134, 25), // "ScannerRange_valueChanged"
QT_MOC_LITERAL(9, 160, 5), // "value"
QT_MOC_LITERAL(10, 166, 32), // "ScannerRange_currentIndexChanged"
QT_MOC_LITERAL(11, 199, 5) // "index"

    },
    "tScannerInfo\0ScannerPower_clicked\0\0"
    "checked\0ScannerTransmit_clicked\0"
    "ScannerKickRadar_clicked\0ScannerQuery_clicked\0"
    "ScannerError_clicked\0ScannerRange_valueChanged\0"
    "value\0ScannerRange_currentIndexChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tScannerInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    1,   52,    2, 0x08 /* Private */,
       5,    1,   55,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       7,    1,   61,    2, 0x08 /* Private */,
       8,    1,   64,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void tScannerInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tScannerInfo *_t = static_cast<tScannerInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ScannerPower_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->ScannerTransmit_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->ScannerKickRadar_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->ScannerQuery_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->ScannerError_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->ScannerRange_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->ScannerRange_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject tScannerInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tScannerInfo.data,
      qt_meta_data_tScannerInfo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tScannerInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tScannerInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tScannerInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tScannerInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
