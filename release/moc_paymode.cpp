/****************************************************************************
** Meta object code from reading C++ file 'paymode.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paymode.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paymode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSpaymodeENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSpaymodeENDCLASS = QtMocHelpers::stringData(
    "paymode",
    "on_PersonalMode_Button_clicked",
    "",
    "on_BookMode_Button_clicked",
    "on_FindBookMode_Button_clicked",
    "judge"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSpaymodeENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[8];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[31];
    char stringdata5[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSpaymodeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSpaymodeENDCLASS_t qt_meta_stringdata_CLASSpaymodeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "paymode"
        QT_MOC_LITERAL(8, 30),  // "on_PersonalMode_Button_clicked"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 26),  // "on_BookMode_Button_clicked"
        QT_MOC_LITERAL(67, 30),  // "on_FindBookMode_Button_clicked"
        QT_MOC_LITERAL(98, 5)   // "judge"
    },
    "paymode",
    "on_PersonalMode_Button_clicked",
    "",
    "on_BookMode_Button_clicked",
    "on_FindBookMode_Button_clicked",
    "judge"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSpaymodeENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject paymode::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSpaymodeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSpaymodeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSpaymodeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<paymode, std::true_type>,
        // method 'on_PersonalMode_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_BookMode_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_FindBookMode_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'judge'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void paymode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<paymode *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_PersonalMode_Button_clicked(); break;
        case 1: _t->on_BookMode_Button_clicked(); break;
        case 2: _t->on_FindBookMode_Button_clicked(); break;
        case 3: _t->judge(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *paymode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *paymode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSpaymodeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int paymode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP