/****************************************************************************
** Meta object code from reading C++ file 'TabTargets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../TabTargets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TabTargets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tTabTargets_t {
    QByteArrayData data[13];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tTabTargets_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tTabTargets_t qt_meta_stringdata_tTabTargets = {
    {
QT_MOC_LITERAL(0, 0, 11), // "tTabTargets"
QT_MOC_LITERAL(1, 12, 27), // "DangerZoneDist_valueChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "value"
QT_MOC_LITERAL(4, 47, 27), // "DangerZoneTime_valueChanged"
QT_MOC_LITERAL(5, 75, 23), // "TargetsQueryAll_clicked"
QT_MOC_LITERAL(6, 99, 7), // "checked"
QT_MOC_LITERAL(7, 107, 25), // "TargetsQuerySetup_clicked"
QT_MOC_LITERAL(8, 133, 27), // "TargetsQueryTargets_clicked"
QT_MOC_LITERAL(9, 161, 17), // "CancelAll_clicked"
QT_MOC_LITERAL(10, 179, 23), // "CancelSelection_clicked"
QT_MOC_LITERAL(11, 203, 21), // "CancelDisplay_clicked"
QT_MOC_LITERAL(12, 225, 26) // "Table_itemSelectionChanged"

    },
    "tTabTargets\0DangerZoneDist_valueChanged\0"
    "\0value\0DangerZoneTime_valueChanged\0"
    "TargetsQueryAll_clicked\0checked\0"
    "TargetsQuerySetup_clicked\0"
    "TargetsQueryTargets_clicked\0"
    "CancelAll_clicked\0CancelSelection_clicked\0"
    "CancelDisplay_clicked\0Table_itemSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tTabTargets[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    1,   62,    2, 0x08 /* Private */,
       5,    1,   65,    2, 0x08 /* Private */,
       7,    1,   68,    2, 0x08 /* Private */,
       8,    1,   71,    2, 0x08 /* Private */,
       9,    1,   74,    2, 0x08 /* Private */,
      10,    1,   77,    2, 0x08 /* Private */,
      11,    1,   80,    2, 0x08 /* Private */,
      12,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,

       0        // eod
};

void tTabTargets::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tTabTargets *_t = static_cast<tTabTargets *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DangerZoneDist_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->DangerZoneTime_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->TargetsQueryAll_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->TargetsQuerySetup_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->TargetsQueryTargets_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->CancelAll_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->CancelSelection_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->CancelDisplay_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->Table_itemSelectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObject tTabTargets::staticMetaObject = {
    { &tTabBase::staticMetaObject, qt_meta_stringdata_tTabTargets.data,
      qt_meta_data_tTabTargets,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tTabTargets::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tTabTargets::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tTabTargets.stringdata0))
        return static_cast<void*>(this);
    return tTabBase::qt_metacast(_clname);
}

int tTabTargets::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = tTabBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
