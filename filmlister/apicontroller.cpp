#include "apicontroller.h"

APIController::APIController(QObject *parent) : QObject(parent)
{

}

void APIController::getAnimeID(QString name)
{
    QFile f("C:/Users/Yamada Stone/Downloads/anime-titles.xml");
    QXmlStreamReader reader;
    f.open(QIODevice::ReadOnly);
    reader.setDevice(&f);
    int aid;
    while (!reader.atEnd()) {
           reader.readNext();
           if (reader.name() == "anime") {
                          foreach(const QXmlStreamAttribute &attr, reader.attributes()) {
                              if (attr.name().toString() == QLatin1String("aid")) {
                                  aid = attr.value().toInt();
                                  // do something
                              }
                          }
                      }
           if (reader.text() == name)
           {
               qDebug()<<QString::number(aid);
               return;
           }
     }

     if (reader.hasError()) {
            qDebug()<<reader.error();
     }
}

