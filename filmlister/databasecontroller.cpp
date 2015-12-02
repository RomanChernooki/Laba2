#include "databasecontroller.h"

DatabaseController::DatabaseController()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/data");

    if (!db.open())
        qDebug()<<db.lastError();
     QSqlQuery query(db);
     query.exec("CREATE TABLE IF NOT EXISTS film (id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    "name TEXT,"
                "director TEXT,"
                "actors TEXT,"
                "description TEXT,"
                "date TEXT,"
                "genre TEXT,"
                "rating TEXT)");
        if(!query.exec("SELECT * FROM film"))
             qDebug()<<query.lastError();
     while (query.next()) {
         Film f;
            f.name = query.value(1).toString();
            f.id = query.value(0).toInt();
            f.director= query.value(2).toString();
            f.actors=query.value(3).toString();
            f.description=query.value(4).toString();
            f.date=query.value(5).toString();
            f.genre=query.value(6).toString();
            f.rating=query.value(7).toString();
            filmList.push_back(f);
            qDebug() << f.name << f.id;
        }

}

void DatabaseController::addFilm(Film film)
{
    filmList.push_back(film);
    QSqlQuery query(db);
        if(!query.exec("INSERT INTO film (id, name, director, actors, description, date, genre, rating) "
                   "VALUES ("+QString::number(film.id)+", '"+film.name+"', '"+film.director+"', '"+film.actors+"', '"+film.description
                       +"', '"+film.date+"', '"+film.genre+"', '"+film.rating+"')"))
            qDebug()<<query.lastError();
}

Film DatabaseController::getFilm(QString name)
{
    int i=0;
    Film f;
    while(this->filmList[i].name!=name)
    {
        i++;
    }
    f=filmList[i];
    return f;
}
