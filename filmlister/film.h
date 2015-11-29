#ifndef FILM_H
#define FILM_H

#include <QString>


class Film
{
public:
    Film();
    int id;
    QString name;
    QString actors;
    QString director;
    QString description;
    QString date;
    QString rating;
    QString genre;
};

#endif // FILM_H
