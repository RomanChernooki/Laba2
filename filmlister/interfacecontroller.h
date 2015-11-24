#ifndef INTERFACECONTROLLER_H
#define INTERFACECONTROLLER_H
#include "film.h"
#include "QObject"
#include "adddialog.h"
#include "mainwindow.h"
#include "databasecontroller.h"

class InterfaceController:public QObject
{
Q_OBJECT
public:
   explicit InterfaceController(QObject *parent = 0);
    DatabaseController database;
    MainWindow* window;
private slots:
    void callAddFilmDialog();
    Film callEditFilmDialog(Film film);
    Film callDeleteFilmDialog(Film film);
signals:
    void addFilm(Film);
    void editFilm(Film);
    void deleteFilm(Film);
};

#endif // INTERFACECONTROLLER_H
