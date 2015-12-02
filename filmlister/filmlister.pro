#-------------------------------------------------
#
# Project created by QtCreator 2015-11-22T22:15:08
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = filmlister
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    interfacecontroller.cpp \
    film.cpp \
    databasecontroller.cpp \
    adddialog.cpp \
    apicontroller.cpp \
    infowindow.cpp

HEADERS  += mainwindow.h \
    interfacecontroller.h \
    film.h \
    databasecontroller.h \
    adddialog.h \
    apicontroller.h \
    infowindow.h

FORMS    += mainwindow.ui \
    adddialog.ui \
    infowindow.ui
