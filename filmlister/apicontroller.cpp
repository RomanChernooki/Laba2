#include "apicontroller.h"

APIController::APIController(QObject *parent) : QObject(parent)
{

}


void APIController::httpReadyRead()
{
    if (file)
        file->write(reply->readAll());
}

void APIController::httpFinished()
{
    QXmlStreamReader reader;
    file->close();
    file->open(QIODevice::ReadOnly);
    reader.setDevice(file);
    qDebug()<<file->isReadable();
    Film f;
    while (!reader.atEnd()) {
           reader.readNext();
           foreach(const QXmlStreamAttribute &attr, reader.attributes()) {

                   if(attr.value().toString()=="Genres")
                   {
                       reader.readNext();
                       f.genre+=reader.text();
                       f.genre+=" ";
                   }
                   if(attr.value().toString()=="Plot Summary")
                   {
                       reader.readNext();
                       f.description+=reader.text();
                   }
                   if(attr.value().toString()=="Vintage")
                   {
                       reader.readNext();
                       f.date+=reader.text();
                       f.date+=" ";
                   }
           }
           if(reader.name()=="role"&&reader.isEndElement())
           {
               reader.readNext();
               reader.readNext();
               f.actors+=reader.text();
               f.actors+=" ";
           }
           if(reader.text()=="Director")
           {
               reader.readNext();
               reader.readNext();
               reader.readNext();
               f.director+=reader.text();
               f.director+=" ";
           }
    }
    emit autofill(f);
}

void APIController::getAnimeID(QString name)
{
    QFile f("C:/reports.xml");
    QXmlStreamReader reader;
    f.open(QIODevice::ReadOnly);
    reader.setDevice(&f);
    int aid;
    while (!reader.atEnd()) {
           reader.readNext();
           if (reader.name() == "id" && reader.tokenString()=="StartElement") {
               reader.readNext();
                aid = reader.text().toInt();
           }
           if (reader.text().toString().toUpper() == name.toUpper())
           {
               path="C:/"+QString::number(aid);
               file = new QFile(path);
               file->open(QIODevice::ReadWrite);
               url.setUrl("http://cdn.animenewsnetwork.com/encyclopedia/api.xml?anime="+QString::number(aid));
               reply = qnam.get(QNetworkRequest(url));
               QObject::connect(reply, SIGNAL(readyRead()),
                       this, SLOT(httpReadyRead()));
               QObject::connect(reply, SIGNAL(finished()),
                       this, SLOT(httpFinished()));
               qDebug()<<QString::number(aid);
               return;
           }
     }

     if (reader.hasError()) {
            qDebug()<<reader.error();
     }
}

