#ifndef DATABASECONTROLLER_H
#define DATABASECONTROLLER_H

#include <QList>
#include <QtSql>
#include <QSqlDatabase>
#include <QtCore>
#include "film.h"



class DatabaseController
{
public:
    QList<Film> filmList;
    void addFilm(Film film);
    void editFilm(QString oldName, Film newFilm);
    Film getFilm(QString name);
    void deleteFilm(QString name);
    DatabaseController();
private:
    QSqlDatabase db;

};

#endif // DATABASECONTROLLER_H
