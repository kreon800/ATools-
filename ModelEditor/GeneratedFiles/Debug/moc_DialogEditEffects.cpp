/****************************************************************************
** Meta object code from reading C++ file 'DialogEditEffects.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "../../DialogEditEffects.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogEditEffects.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CDialogEditEffects_t {
    QByteArrayData data[17];
    char stringdata[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CDialogEditEffects_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CDialogEditEffects_t qt_meta_stringdata_CDialogEditEffects = {
    {
QT_MOC_LITERAL(0, 0, 18), // "CDialogEditEffects"
QT_MOC_LITERAL(1, 19, 18), // "CurrentItemChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 56, 7), // "current"
QT_MOC_LITERAL(5, 64, 8), // "previous"
QT_MOC_LITERAL(6, 73, 9), // "Set2Sides"
QT_MOC_LITERAL(7, 83, 1), // "b"
QT_MOC_LITERAL(8, 85, 10), // "SetOpacity"
QT_MOC_LITERAL(9, 96, 10), // "SetReflect"
QT_MOC_LITERAL(10, 107, 17), // "SetSelfIlluminate"
QT_MOC_LITERAL(11, 125, 12), // "SetHighlight"
QT_MOC_LITERAL(12, 138, 9), // "SetAmount"
QT_MOC_LITERAL(13, 148, 1), // "v"
QT_MOC_LITERAL(14, 150, 13), // "ChangeTexture"
QT_MOC_LITERAL(15, 164, 8), // "ChangeCW"
QT_MOC_LITERAL(16, 173, 11) // "ResetBlocks"

    },
    "CDialogEditEffects\0CurrentItemChanged\0"
    "\0QTreeWidgetItem*\0current\0previous\0"
    "Set2Sides\0b\0SetOpacity\0SetReflect\0"
    "SetSelfIlluminate\0SetHighlight\0SetAmount\0"
    "v\0ChangeTexture\0ChangeCW\0ResetBlocks"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CDialogEditEffects[] = {

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
       1,    2,   64,    2, 0x0a /* Public */,
       6,    1,   69,    2, 0x0a /* Public */,
       8,    1,   72,    2, 0x0a /* Public */,
       9,    1,   75,    2, 0x0a /* Public */,
      10,    1,   78,    2, 0x0a /* Public */,
      11,    1,   81,    2, 0x0a /* Public */,
      12,    1,   84,    2, 0x0a /* Public */,
      14,    0,   87,    2, 0x0a /* Public */,
      15,    0,   88,    2, 0x0a /* Public */,
      16,    0,   89,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CDialogEditEffects::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CDialogEditEffects *_t = static_cast<CDialogEditEffects *>(_o);
        switch (_id) {
        case 0: _t->CurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->Set2Sides((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->SetOpacity((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->SetReflect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->SetSelfIlluminate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->SetHighlight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->SetAmount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->ChangeTexture(); break;
        case 8: _t->ChangeCW(); break;
        case 9: _t->ResetBlocks(); break;
        default: ;
        }
    }
}

const QMetaObject CDialogEditEffects::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CDialogEditEffects.data,
      qt_meta_data_CDialogEditEffects,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CDialogEditEffects::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CDialogEditEffects::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CDialogEditEffects.stringdata))
        return static_cast<void*>(const_cast< CDialogEditEffects*>(this));
    return QDialog::qt_metacast(_clname);
}

int CDialogEditEffects::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
