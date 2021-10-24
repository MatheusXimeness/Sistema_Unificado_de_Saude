QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    alteraremail.cpp \
    alterarsenha.cpp \
    cadastrarvacina.cpp \
    cadastro.cpp \
    configperfil.cpp \
    consultasmarcadas.cpp \
    criaconsulta.cpp \
    historicoconsultas.cpp \
    login.cpp \
    main.cpp \
    menuwindow.cpp \
    relacaopacientemedico.cpp \
    visualizarcartao.cpp

HEADERS += \
    alteraremail.h \
    alterarsenha.h \
    cadastrarvacina.h \
    cadastro.h \
    configperfil.h \
    consultasmarcadas.h \
    criaconsulta.h \
    historicoconsultas.h \
    login.h \
    menuwindow.h \
    relacaopacientemedico.h \
    visualizarcartao.h

FORMS += \
    alteraremail.ui \
    alterarsenha.ui \
    cadastrarvacina.ui \
    cadastro.ui \
    configperfil.ui \
    consultasmarcadas.ui \
    criaconsulta.ui \
    historicoconsultas.ui \
    login.ui \
    menuwindow.ui \
    relacaopacientemedico.ui \
    visualizarcartao.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ArquivoDeRecursos.qrc
