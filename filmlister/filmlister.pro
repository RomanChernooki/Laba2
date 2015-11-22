#-------------------------------------------------
#
# Project created by QtCreator 2015-11-22T22:15:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = filmlister
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    interfacecontroller.cpp \
    film.cpp \
    apicontroller.cpp \
    databasecontroller.cpp

HEADERS  += mainwindow.h \
    interfacecontroller.h \
    film.h \
    apicontroller.h \
    databasecontroller.h

FORMS    += mainwindow.ui
