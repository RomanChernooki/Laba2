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
    DatabaseController();
private:
    QSqlDatabase db;

};

#endif // DATABASECONTROLLER_H
