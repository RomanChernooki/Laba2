#include "mainwindow.h"
#include "interfacecontroller.h"
#include <QApplication>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InterfaceController c;
    MainWindow w;
    c.window=&w;
    QObject::connect(&w,SIGNAL(addButtonPressed()),&c,SLOT(callAddFilmDialog()));
    QObject::connect(&w,SIGNAL(getInfo(QString)),&c,SLOT(callInfoDialog(QString)));
    QObject::connect(&c,SIGNAL(addFilm(Film)),&w,SLOT(addFilm(Film)));
    QObject::connect(&w,SIGNAL(editButtonPressed(QString)),&c,SLOT(callEditFilmDialog(QString)));
    QObject::connect(&c,SIGNAL(editFilm(Film)),&w,SLOT(editFilm(Film)));
    QObject::connect(&w,SIGNAL(deleteButtonPressed(QString)),&c,SLOT(callDeleteFilmDialog(QString)));
    c.initTable();
    w.show();

    return a.exec();
}
