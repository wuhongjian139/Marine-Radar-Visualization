/****************************************************************************
** Meta object code from reading C++ file 'TabInstallation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../TabInstallation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TabInstallation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tTabInstallation_t {
    QByteArrayData data[12];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tTabInstallation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tTabInstallation_t qt_meta_stringdata_tTabInstallation = {
    {
QT_MOC_LITERAL(0, 0, 16), // "tTabInstallation"
QT_MOC_LITERAL(1, 17, 25), // "ParkPosition_valueChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5), // "value"
QT_MOC_LITERAL(4, 50, 26), // "AntennaHeight_valueChanged"
QT_MOC_LITERAL(5, 77, 27), // "AntennaXOffset_valueChanged"
QT_MOC_LITERAL(6, 105, 27), // "AntennaYOffset_valueChanged"
QT_MOC_LITERAL(7, 133, 22), // "ZeroRange_valueChanged"
QT_MOC_LITERAL(8, 156, 24), // "ZeroBearing_valueChanged"
QT_MOC_LITERAL(9, 181, 23), // "FactoryDefaults_clicked"
QT_MOC_LITERAL(10, 205, 7), // "checked"
QT_MOC_LITERAL(11, 213, 31) // "AntennaType_currentIndexChanged"

    },
    "tTabInstallation\0ParkPosition_valueChanged\0"
    "\0value\0AntennaHeight_valueChanged\0"
    "AntennaXOffset_valueChanged\0"
    "AntennaYOffset_valueChanged\0"
    "ZeroRange_valueChanged\0ZeroBearing_valueChanged\0"
    "FactoryDefaults_clicked\0checked\0"
    "AntennaType_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tTabInstallation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       5,    1,   60,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       7,    1,   66,    2, 0x08 /* Private */,
       8,    1,   69,    2, 0x08 /* Private */,
       9,    1,   72,    2, 0x08 /* Private */,
      11,    1,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void tTabInstallation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tTabInstallation *_t = static_cast<tTabInstallation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ParkPosition_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->AntennaHeight_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->AntennaXOffset_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->AntennaYOffset_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->ZeroRange_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->ZeroBearing_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->FactoryDefaults_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->AntennaType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject tTabInstallation::staticMetaObject = {
    { &tTabBase::staticMetaObject, qt_meta_stringdata_tTabInstallation.data,
      qt_meta_data_tTabInstallation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tTabInstallation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tTabInstallation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tTabInstallation.stringdata0))
        return static_cast<void*>(this);
    return tTabBase::qt_metacast(_clname);
}

int tTabInstallation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = tTabBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
