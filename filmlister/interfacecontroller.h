#ifndef INTERFACECONTROLLER_H
#define INTERFACECONTROLLER_H
#include "film.h"
#include "QObject"
#include "adddialog.h"
#include "mainwindow.h"

class InterfaceController:public QObject
{
Q_OBJECT
public:
   explicit InterfaceController(QObject *parent = 0);
    MainWindow* window;
private slots:
    void callAddFilmDialog();
    void callEditFilmDialog(Film film);
    void callDeleteFilmDialog(Film film);
};

#endif // INTERFACECONTROLLER_H
