#include "interfacecontroller.h"
#include <QDebug>

InterfaceController::InterfaceController(QObject *parent) : QObject(parent)
{

}


void InterfaceController::callAddFilmDialog()
{
     AddDialog d;
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
         emit addFilm(f);
     }
}

Film InterfaceController::callDeleteFilmDialog(Film film)
{

}
Film InterfaceController::callEditFilmDialog(Film film)
{

}

