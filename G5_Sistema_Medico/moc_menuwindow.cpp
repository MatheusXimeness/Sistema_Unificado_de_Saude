/****************************************************************************
** Meta object code from reading C++ file 'menuwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "menuwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menuwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_menuWindow_t {
    QByteArrayData data[11];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_menuWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_menuWindow_t qt_meta_stringdata_menuWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "menuWindow"
QT_MOC_LITERAL(1, 11, 28), // "on_actionCadastrar_triggered"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 35), // "on_actionVisualizarCartao_tri..."
QT_MOC_LITERAL(4, 77, 37), // "on_relacionarMedicoPaciente_t..."
QT_MOC_LITERAL(5, 115, 32), // "on_actionCriarConsulta_triggered"
QT_MOC_LITERAL(6, 148, 36), // "on_actionConsultasMarcadas_tr..."
QT_MOC_LITERAL(7, 185, 37), // "on_actionHistoricoConsultas_t..."
QT_MOC_LITERAL(8, 223, 34), // "on_actionConsultarCartao_trig..."
QT_MOC_LITERAL(9, 258, 32), // "on_actionConfiguracoes_triggered"
QT_MOC_LITERAL(10, 291, 23) // "on_actionSair_triggered"

    },
    "menuWindow\0on_actionCadastrar_triggered\0"
    "\0on_actionVisualizarCartao_triggered\0"
    "on_relacionarMedicoPaciente_triggered\0"
    "on_actionCriarConsulta_triggered\0"
    "on_actionConsultasMarcadas_triggered\0"
    "on_actionHistoricoConsultas_triggered\0"
    "on_actionConsultarCartao_triggered\0"
    "on_actionConfiguracoes_triggered\0"
    "on_actionSair_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_menuWindow[] = {

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
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

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

       0        // eod
};

void menuWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        menuWindow *_t = static_cast<menuWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionCadastrar_triggered(); break;
        case 1: _t->on_actionVisualizarCartao_triggered(); break;
        case 2: _t->on_relacionarMedicoPaciente_triggered(); break;
        case 3: _t->on_actionCriarConsulta_triggered(); break;
        case 4: _t->on_actionConsultasMarcadas_triggered(); break;
        case 5: _t->on_actionHistoricoConsultas_triggered(); break;
        case 6: _t->on_actionConsultarCartao_triggered(); break;
        case 7: _t->on_actionConfiguracoes_triggered(); break;
        case 8: _t->on_actionSair_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject menuWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_menuWindow.data,
      qt_meta_data_menuWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *menuWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *menuWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_menuWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int menuWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
