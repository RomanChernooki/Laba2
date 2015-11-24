#include "databasecontroller.h"

DatabaseController::DatabaseController()
{

}

void DatabaseController::addFilm(Film film)
{
    filmList.push_back(film);
    //TODO database
}
