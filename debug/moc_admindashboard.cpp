/****************************************************************************
** Meta object code from reading C++ file 'admindashboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../admindashboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admindashboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_admindashboard_t {
    QByteArrayData data[13];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_admindashboard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_admindashboard_t qt_meta_stringdata_admindashboard = {
    {
QT_MOC_LITERAL(0, 0, 14), // "admindashboard"
QT_MOC_LITERAL(1, 15, 16), // "setCurrentWidget"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 24), // "on_addbookButton_clicked"
QT_MOC_LITERAL(4, 58, 27), // "on_searchbookButton_clicked"
QT_MOC_LITERAL(5, 86, 22), // "on_issueButton_clicked"
QT_MOC_LITERAL(6, 109, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 133, 27), // "on_returnBookButton_clicked"
QT_MOC_LITERAL(8, 161, 21), // "on_backButton_clicked"
QT_MOC_LITERAL(9, 183, 23), // "on_searchByName_clicked"
QT_MOC_LITERAL(10, 207, 28), // "on_refreshBooksTable_clicked"
QT_MOC_LITERAL(11, 236, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(12, 258, 23) // "on_pushButton_3_clicked"

    },
    "admindashboard\0setCurrentWidget\0\0"
    "on_addbookButton_clicked\0"
    "on_searchbookButton_clicked\0"
    "on_issueButton_clicked\0on_pushButton_2_clicked\0"
    "on_returnBookButton_clicked\0"
    "on_backButton_clicked\0on_searchByName_clicked\0"
    "on_refreshBooksTable_clicked\0"
    "on_pushButton_clicked\0on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_admindashboard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   72,    2, 0x08 /* Private */,
       4,    0,   73,    2, 0x08 /* Private */,
       5,    0,   74,    2, 0x08 /* Private */,
       6,    0,   75,    2, 0x08 /* Private */,
       7,    0,   76,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    0,   79,    2, 0x08 /* Private */,
      11,    0,   80,    2, 0x08 /* Private */,
      12,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void admindashboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<admindashboard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCurrentWidget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_addbookButton_clicked(); break;
        case 2: _t->on_searchbookButton_clicked(); break;
        case 3: _t->on_issueButton_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_returnBookButton_clicked(); break;
        case 6: _t->on_backButton_clicked(); break;
        case 7: _t->on_searchByName_clicked(); break;
        case 8: _t->on_refreshBooksTable_clicked(); break;
        case 9: _t->on_pushButton_clicked(); break;
        case 10: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (admindashboard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&admindashboard::setCurrentWidget)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject admindashboard::staticMetaObject = { {
    QMetaObject::SuperData::link<QTabWidget::staticMetaObject>(),
    qt_meta_stringdata_admindashboard.data,
    qt_meta_data_admindashboard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *admindashboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *admindashboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_admindashboard.stringdata0))
        return static_cast<void*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int admindashboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void admindashboard::setCurrentWidget(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
