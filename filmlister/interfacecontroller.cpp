#include "interfacecontroller.h"

InterfaceController::InterfaceController(QObject *parent) : QObject(parent)
{

}


void InterfaceController::callAddFilmDialog()
{
     AddDialog d;
     d.exec();
}

void InterfaceController::callDeleteFilmDialog(Film film)
{

}
void InterfaceController::callEditFilmDialog(Film film)
{

}

