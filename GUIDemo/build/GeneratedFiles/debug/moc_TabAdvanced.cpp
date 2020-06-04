/****************************************************************************
** Meta object code from reading C++ file 'TabAdvanced.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../TabAdvanced.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TabAdvanced.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tTabAdvanced_t {
    QByteArrayData data[14];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tTabAdvanced_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tTabAdvanced_t qt_meta_stringdata_tTabAdvanced = {
    {
QT_MOC_LITERAL(0, 0, 12), // "tTabAdvanced"
QT_MOC_LITERAL(1, 13, 22), // "RangeTrim_valueChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "value"
QT_MOC_LITERAL(4, 43, 22), // "RangeRate_valueChanged"
QT_MOC_LITERAL(5, 66, 20), // "SeaTrim_valueChanged"
QT_MOC_LITERAL(6, 87, 21), // "SeaRate1_valueChanged"
QT_MOC_LITERAL(7, 109, 21), // "SeaRate2_valueChanged"
QT_MOC_LITERAL(8, 131, 21), // "RainTrim_valueChanged"
QT_MOC_LITERAL(9, 153, 21), // "RainRate_valueChanged"
QT_MOC_LITERAL(10, 175, 23), // "UserMinSNR_valueChanged"
QT_MOC_LITERAL(11, 199, 26), // "VideoAperture_valueChanged"
QT_MOC_LITERAL(12, 226, 27), // "MainBangSuppression_clicked"
QT_MOC_LITERAL(13, 254, 7) // "checked"

    },
    "tTabAdvanced\0RangeTrim_valueChanged\0"
    "\0value\0RangeRate_valueChanged\0"
    "SeaTrim_valueChanged\0SeaRate1_valueChanged\0"
    "SeaRate2_valueChanged\0RainTrim_valueChanged\0"
    "RainRate_valueChanged\0UserMinSNR_valueChanged\0"
    "VideoAperture_valueChanged\0"
    "MainBangSuppression_clicked\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tTabAdvanced[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    1,   67,    2, 0x08 /* Private */,
       5,    1,   70,    2, 0x08 /* Private */,
       6,    1,   73,    2, 0x08 /* Private */,
       7,    1,   76,    2, 0x08 /* Private */,
       8,    1,   79,    2, 0x08 /* Private */,
       9,    1,   82,    2, 0x08 /* Private */,
      10,    1,   85,    2, 0x08 /* Private */,
      11,    1,   88,    2, 0x08 /* Private */,
      12,    1,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Bool,   13,

       0        // eod
};

void tTabAdvanced::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tTabAdvanced *_t = static_cast<tTabAdvanced *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RangeTrim_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->RangeRate_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SeaTrim_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->SeaRate1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->SeaRate2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->RainTrim_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->RainRate_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->UserMinSNR_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->VideoAperture_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->MainBangSuppression_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject tTabAdvanced::staticMetaObject = {
    { &tTabBase::staticMetaObject, qt_meta_stringdata_tTabAdvanced.data,
      qt_meta_data_tTabAdvanced,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tTabAdvanced::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tTabAdvanced::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tTabAdvanced.stringdata0))
        return static_cast<void*>(this);
    return tTabBase::qt_metacast(_clname);
}

int tTabAdvanced::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = tTabBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
