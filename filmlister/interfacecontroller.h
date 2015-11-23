#ifndef INTERFACECONTROLLER_H
#define INTERFACECONTROLLER_H
#include "film.h"
#include "QMainWindow"

class InterfaceController
{

public:
    InterfaceController();
private slots:
    void addFilm();
    void editFilm(Film film);
    void deleteFilm(Film film);
};

#endif // INTERFACECONTROLLER_H
