#include "databasecontroller.h"

DatabaseController::DatabaseController()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/data");

    if (!db.open())
        qDebug()<<db.lastError();
     QSqlQuery query(db);
     query.exec("CREATE TABLE IF NOT EXISTS film (id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    "name VARCHAR(20))");
     qDebug() << query.lastError();
        if(!query.exec("SELECT * FROM film"))
             qDebug()<<query.lastError();
     while (query.next()) {
         Film f;
            f.name = query.value(1).toString();
            f.id = query.value(0).toInt();
            filmList.push_back(f);
            qDebug() << f.name << f.id;
        }

}

void DatabaseController::addFilm(Film film)
{
    filmList.push_back(film);
    QSqlQuery query(db);
        if(!query.exec("INSERT INTO film (id, name) "
                   "VALUES ("+QString::number(film.id)+", '"+film.name+"')"))
            qDebug()<<query.lastError();
}
