/****************************************************************************
** Meta object code from reading C++ file 'bookmode.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bookmode.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookmode.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSbookmodeENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSbookmodeENDCLASS = QtMocHelpers::stringData(
    "bookmode",
    "on_PersonalMode_Button_clicked",
    "",
    "on_FindBookMode_Button_clicked",
    "on_PayMode_Button_clicked",
    "b_timeint",
    "intime",
    "int&",
    "out_of_day",
    "updatapages",
    "hide_up1",
    "hide_up2",
    "hide_up3",
    "set_up1",
    "Bookname",
    "bookday",
    "set_up2",
    "set_up3",
    "hide_down1",
    "hide_down2",
    "hide_down3",
    "hide_down4",
    "set_down1",
    "set_down2",
    "set_down3",
    "set_down4",
    "on_bookk_clicked",
    "askreturn",
    "bookname",
    "askborrow",
    "on_bookk_2_clicked",
    "on_bookk_3_clicked",
    "on_db_clicked",
    "on_db_2_clicked",
    "on_db_3_clicked",
    "on_db_4_clicked",
    "showpages",
    "length",
    "pagenumber",
    "on_pages_textEdited",
    "arg1",
    "on_reduce_button_clicked",
    "on_raise_button_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSbookmodeENDCLASS_t {
    uint offsetsAndSizes[86];
    char stringdata0[9];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[31];
    char stringdata4[26];
    char stringdata5[10];
    char stringdata6[7];
    char stringdata7[5];
    char stringdata8[11];
    char stringdata9[12];
    char stringdata10[9];
    char stringdata11[9];
    char stringdata12[9];
    char stringdata13[8];
    char stringdata14[9];
    char stringdata15[8];
    char stringdata16[8];
    char stringdata17[8];
    char stringdata18[11];
    char stringdata19[11];
    char stringdata20[11];
    char stringdata21[11];
    char stringdata22[10];
    char stringdata23[10];
    char stringdata24[10];
    char stringdata25[10];
    char stringdata26[17];
    char stringdata27[10];
    char stringdata28[9];
    char stringdata29[10];
    char stringdata30[19];
    char stringdata31[19];
    char stringdata32[14];
    char stringdata33[16];
    char stringdata34[16];
    char stringdata35[16];
    char stringdata36[10];
    char stringdata37[7];
    char stringdata38[11];
    char stringdata39[20];
    char stringdata40[5];
    char stringdata41[25];
    char stringdata42[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSbookmodeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSbookmodeENDCLASS_t qt_meta_stringdata_CLASSbookmodeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "bookmode"
        QT_MOC_LITERAL(9, 30),  // "on_PersonalMode_Button_clicked"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 30),  // "on_FindBookMode_Button_clicked"
        QT_MOC_LITERAL(72, 25),  // "on_PayMode_Button_clicked"
        QT_MOC_LITERAL(98, 9),  // "b_timeint"
        QT_MOC_LITERAL(108, 6),  // "intime"
        QT_MOC_LITERAL(115, 4),  // "int&"
        QT_MOC_LITERAL(120, 10),  // "out_of_day"
        QT_MOC_LITERAL(131, 11),  // "updatapages"
        QT_MOC_LITERAL(143, 8),  // "hide_up1"
        QT_MOC_LITERAL(152, 8),  // "hide_up2"
        QT_MOC_LITERAL(161, 8),  // "hide_up3"
        QT_MOC_LITERAL(170, 7),  // "set_up1"
        QT_MOC_LITERAL(178, 8),  // "Bookname"
        QT_MOC_LITERAL(187, 7),  // "bookday"
        QT_MOC_LITERAL(195, 7),  // "set_up2"
        QT_MOC_LITERAL(203, 7),  // "set_up3"
        QT_MOC_LITERAL(211, 10),  // "hide_down1"
        QT_MOC_LITERAL(222, 10),  // "hide_down2"
        QT_MOC_LITERAL(233, 10),  // "hide_down3"
        QT_MOC_LITERAL(244, 10),  // "hide_down4"
        QT_MOC_LITERAL(255, 9),  // "set_down1"
        QT_MOC_LITERAL(265, 9),  // "set_down2"
        QT_MOC_LITERAL(275, 9),  // "set_down3"
        QT_MOC_LITERAL(285, 9),  // "set_down4"
        QT_MOC_LITERAL(295, 16),  // "on_bookk_clicked"
        QT_MOC_LITERAL(312, 9),  // "askreturn"
        QT_MOC_LITERAL(322, 8),  // "bookname"
        QT_MOC_LITERAL(331, 9),  // "askborrow"
        QT_MOC_LITERAL(341, 18),  // "on_bookk_2_clicked"
        QT_MOC_LITERAL(360, 18),  // "on_bookk_3_clicked"
        QT_MOC_LITERAL(379, 13),  // "on_db_clicked"
        QT_MOC_LITERAL(393, 15),  // "on_db_2_clicked"
        QT_MOC_LITERAL(409, 15),  // "on_db_3_clicked"
        QT_MOC_LITERAL(425, 15),  // "on_db_4_clicked"
        QT_MOC_LITERAL(441, 9),  // "showpages"
        QT_MOC_LITERAL(451, 6),  // "length"
        QT_MOC_LITERAL(458, 10),  // "pagenumber"
        QT_MOC_LITERAL(469, 19),  // "on_pages_textEdited"
        QT_MOC_LITERAL(489, 4),  // "arg1"
        QT_MOC_LITERAL(494, 24),  // "on_reduce_button_clicked"
        QT_MOC_LITERAL(519, 23)   // "on_raise_button_clicked"
    },
    "bookmode",
    "on_PersonalMode_Button_clicked",
    "",
    "on_FindBookMode_Button_clicked",
    "on_PayMode_Button_clicked",
    "b_timeint",
    "intime",
    "int&",
    "out_of_day",
    "updatapages",
    "hide_up1",
    "hide_up2",
    "hide_up3",
    "set_up1",
    "Bookname",
    "bookday",
    "set_up2",
    "set_up3",
    "hide_down1",
    "hide_down2",
    "hide_down3",
    "hide_down4",
    "set_down1",
    "set_down2",
    "set_down3",
    "set_down4",
    "on_bookk_clicked",
    "askreturn",
    "bookname",
    "askborrow",
    "on_bookk_2_clicked",
    "on_bookk_3_clicked",
    "on_db_clicked",
    "on_db_2_clicked",
    "on_db_3_clicked",
    "on_db_4_clicked",
    "showpages",
    "length",
    "pagenumber",
    "on_pages_textEdited",
    "arg1",
    "on_reduce_button_clicked",
    "on_raise_button_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbookmodeENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  206,    2, 0x08,    1 /* Private */,
       3,    0,  207,    2, 0x08,    2 /* Private */,
       4,    0,  208,    2, 0x08,    3 /* Private */,
       5,    2,  209,    2, 0x08,    4 /* Private */,
       9,    0,  214,    2, 0x08,    7 /* Private */,
      10,    0,  215,    2, 0x08,    8 /* Private */,
      11,    0,  216,    2, 0x08,    9 /* Private */,
      12,    0,  217,    2, 0x08,   10 /* Private */,
      13,    2,  218,    2, 0x08,   11 /* Private */,
      16,    2,  223,    2, 0x08,   14 /* Private */,
      17,    2,  228,    2, 0x08,   17 /* Private */,
      18,    0,  233,    2, 0x08,   20 /* Private */,
      19,    0,  234,    2, 0x08,   21 /* Private */,
      20,    0,  235,    2, 0x08,   22 /* Private */,
      21,    0,  236,    2, 0x08,   23 /* Private */,
      22,    1,  237,    2, 0x08,   24 /* Private */,
      23,    1,  240,    2, 0x08,   26 /* Private */,
      24,    1,  243,    2, 0x08,   28 /* Private */,
      25,    1,  246,    2, 0x08,   30 /* Private */,
      26,    0,  249,    2, 0x08,   32 /* Private */,
      27,    1,  250,    2, 0x08,   33 /* Private */,
      29,    1,  253,    2, 0x08,   35 /* Private */,
      30,    0,  256,    2, 0x08,   37 /* Private */,
      31,    0,  257,    2, 0x08,   38 /* Private */,
      32,    0,  258,    2, 0x08,   39 /* Private */,
      33,    0,  259,    2, 0x08,   40 /* Private */,
      34,    0,  260,    2, 0x08,   41 /* Private */,
      35,    0,  261,    2, 0x08,   42 /* Private */,
      36,    2,  262,    2, 0x08,   43 /* Private */,
      39,    1,  267,    2, 0x08,   46 /* Private */,
      41,    0,  270,    2, 0x08,   48 /* Private */,
      42,    0,  271,    2, 0x08,   49 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int, 0x80000000 | 7,    6,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   37,   38,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject bookmode::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSbookmodeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbookmodeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbookmodeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<bookmode, std::true_type>,
        // method 'on_PersonalMode_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_FindBookMode_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PayMode_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'b_timeint'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int &, std::false_type>,
        // method 'updatapages'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hide_up1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hide_up2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hide_up3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_up1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_up2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_up3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'hide_down1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hide_down2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hide_down3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hide_down4'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_down1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_down2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_down3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_down4'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_bookk_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'askreturn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'askborrow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_bookk_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bookk_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_db_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_db_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_db_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_db_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showpages'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pages_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_reduce_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_raise_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void bookmode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<bookmode *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_PersonalMode_Button_clicked(); break;
        case 1: _t->on_FindBookMode_Button_clicked(); break;
        case 2: _t->on_PayMode_Button_clicked(); break;
        case 3: { int _r = _t->b_timeint((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int&>>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->updatapages(); break;
        case 5: _t->hide_up1(); break;
        case 6: _t->hide_up2(); break;
        case 7: _t->hide_up3(); break;
        case 8: _t->set_up1((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->set_up2((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->set_up3((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 11: _t->hide_down1(); break;
        case 12: _t->hide_down2(); break;
        case 13: _t->hide_down3(); break;
        case 14: _t->hide_down4(); break;
        case 15: _t->set_down1((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->set_down2((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->set_down3((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->set_down4((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->on_bookk_clicked(); break;
        case 20: _t->askreturn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->askborrow((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->on_bookk_2_clicked(); break;
        case 23: _t->on_bookk_3_clicked(); break;
        case 24: _t->on_db_clicked(); break;
        case 25: _t->on_db_2_clicked(); break;
        case 26: _t->on_db_3_clicked(); break;
        case 27: _t->on_db_4_clicked(); break;
        case 28: _t->showpages((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 29: _t->on_pages_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 30: _t->on_reduce_button_clicked(); break;
        case 31: _t->on_raise_button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *bookmode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bookmode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSbookmodeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int bookmode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 32;
    }
    return _id;
}
QT_WARNING_POP
