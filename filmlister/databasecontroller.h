#ifndef DATABASECONTROLLER_H
#define DATABASECONTROLLER_H

#include <QList>
#include "film.h"


class DatabaseController
{
public:
    QList<Film> filmList;
    void addFilm(Film film);
    DatabaseController();

};

#endif // DATABASECONTROLLER_H
