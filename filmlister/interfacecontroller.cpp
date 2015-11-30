#include "interfacecontroller.h"
#include <QDebug>

InterfaceController::InterfaceController(QObject *parent) : QObject(parent)
{
    if(database.filmList.size()>0)
        for(int i=0;i<database.filmList.size();i++)
        {
            emit addFilm(database.filmList[i]);
        }
}

void InterfaceController::initTable()
{
    if(database.filmList.size()>0)
        for(int i=0;i<database.filmList.size();i++)
        {
            emit addFilm(database.filmList[i]);
        }
}

void InterfaceController::callAddFilmDialog()
{
     AddDialog d;
     connect(&d,SIGNAL(autoFill(QString)),&API,SLOT(getAnimeID(QString)));
     d.exec();
     Film f;
     if(1==d.result())
     {
         f.actors=d.actors;
         f.date=d.date;
         f.genre=d.genre;
         f.director=d.director;
         f.name=d.name;
         f.rating=d.rating;
         f.description=d.description;
         f.id=database.filmList.size();
         database.addFilm(f);
         emit addFilm(f);
     }
}

Film InterfaceController::callDeleteFilmDialog(Film film)
{

}
Film InterfaceController::callEditFilmDialog(Film film)
{

}

