#ifndef INTERFACECONTROLLER_H
#define INTERFACECONTROLLER_H
#include "film.h"
#include "QObject"
#include "adddialog.h"
#include "mainwindow.h"
#include "databasecontroller.h"
#include "apicontroller.h"
#include "infowindow.h"

class InterfaceController:public QObject
{
Q_OBJECT
public:
   explicit InterfaceController(QObject *parent = 0);
    DatabaseController database;
    MainWindow* window;
    APIController API;
    void initTable();
private slots:
    void callAddFilmDialog();
    void callEditFilmDialog(QString name);
    Film callDeleteFilmDialog(QString name);
    void callInfoDialog(QString name);
signals:
    void addFilm(Film);
    void editFilm(Film);
    void deleteFilm(Film);
};

#endif // INTERFACECONTROLLER_H
