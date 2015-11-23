#include "interfacecontroller.h"

InterfaceController::InterfaceController(QObject *parent) : QObject(parent)
{

}


void InterfaceController::callAddFilmDialog()
{
     AddDialog *d= new AddDialog;
     d->exec();
}

void InterfaceController::callDeleteFilmDialog(Film film)
{

}
void InterfaceController::callEditFilmDialog(Film film)
{

}

