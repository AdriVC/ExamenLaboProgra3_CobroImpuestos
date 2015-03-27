#-------------------------------------------------
#
# Project created by QtCreator 2015-03-27T13:24:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AduanasLaMorsa
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    historial.cpp \
    agregarCliente.cpp \
    agregarProducto.cpp \
    nuevoCobro.cpp \
    setTasas.cpp \
    Cliente.cpp \
    educativos.cpp \
    Prods_alcoholicos.cpp \
    Prods_lujo.cpp \
    productos.cpp

HEADERS  += mainwindow.h \
    historial.h \
    agregarCliente.h \
    agregarProducto.h \
    nuevoCobro.h \
    setTasas.h \
    Cliente.h \
    educativos.h \
    Prods_alcoholicos.h \
    Prods_lujo.h \
    productos.h

FORMS    += mainwindow.ui \
    historial.ui \
    agregarCliente.ui \
    agregarProducto.ui \
    nuevoCobro.ui \
    setTasas.ui

RESOURCES += \
    resources.qrc
