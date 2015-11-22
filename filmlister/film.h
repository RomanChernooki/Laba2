#ifndef FILM_H
#define FILM_H
#include <QList>
#include <QString>
#include <QDate>


class Film
{
public:
    Film();
    QString name;
    QList<QString> actors;
    QString director;
    QString description;
    QDate date;
    int rating;
};

#endif // FILM_H
