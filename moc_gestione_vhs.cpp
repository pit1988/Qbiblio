/****************************************************************************
** Meta object code from reading C++ file 'gestione_vhs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "View/gestione_vhs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gestione_vhs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Gestione_VHS_t {
    QByteArrayData data[12];
    char stringdata[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Gestione_VHS_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Gestione_VHS_t qt_meta_stringdata_Gestione_VHS = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 15),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 15),
QT_MOC_LITERAL(4, 46, 16),
QT_MOC_LITERAL(5, 63, 13),
QT_MOC_LITERAL(6, 77, 13),
QT_MOC_LITERAL(7, 91, 14),
QT_MOC_LITERAL(8, 106, 16),
QT_MOC_LITERAL(9, 123, 10),
QT_MOC_LITERAL(10, 134, 4),
QT_MOC_LITERAL(11, 139, 24)
    },
    "Gestione_VHS\0signalInsertVHS\0\0"
    "signalRemoveVHS\0signalReplaceVHS\0"
    "slotInsertVHS\0slotRemoveVHS\0slotReplaceVHS\0"
    "slotReplaceVHS_c\0slotNewVHS\0VHS*\0"
    "slotReplaceVideoCassetta\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gestione_VHS[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06,
       3,    0,   60,    2, 0x06,
       4,    0,   61,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    0,   62,    2, 0x0a,
       6,    0,   63,    2, 0x0a,
       7,    0,   64,    2, 0x0a,
       8,    0,   65,    2, 0x0a,
       9,    0,   66,    2, 0x0a,
      11,    0,   67,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 10,
    0x80000000 | 10,

       0        // eod
};

void Gestione_VHS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Gestione_VHS *_t = static_cast<Gestione_VHS *>(_o);
        switch (_id) {
        case 0: _t->signalInsertVHS(); break;
        case 1: _t->signalRemoveVHS(); break;
        case 2: _t->signalReplaceVHS(); break;
        case 3: _t->slotInsertVHS(); break;
        case 4: _t->slotRemoveVHS(); break;
        case 5: _t->slotReplaceVHS(); break;
        case 6: _t->slotReplaceVHS_c(); break;
        case 7: { VHS* _r = _t->slotNewVHS();
            if (_a[0]) *reinterpret_cast< VHS**>(_a[0]) = _r; }  break;
        case 8: { VHS* _r = _t->slotReplaceVideoCassetta();
            if (_a[0]) *reinterpret_cast< VHS**>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Gestione_VHS::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Gestione_VHS::signalInsertVHS)) {
                *result = 0;
            }
        }
        {
            typedef void (Gestione_VHS::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Gestione_VHS::signalRemoveVHS)) {
                *result = 1;
            }
        }
        {
            typedef void (Gestione_VHS::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Gestione_VHS::signalReplaceVHS)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Gestione_VHS::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Gestione_VHS.data,
      qt_meta_data_Gestione_VHS,  qt_static_metacall, 0, 0}
};


const QMetaObject *Gestione_VHS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gestione_VHS::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gestione_VHS.stringdata))
        return static_cast<void*>(const_cast< Gestione_VHS*>(this));
    return QDialog::qt_metacast(_clname);
}

int Gestione_VHS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Gestione_VHS::signalInsertVHS()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Gestione_VHS::signalRemoveVHS()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Gestione_VHS::signalReplaceVHS()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE