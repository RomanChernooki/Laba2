#ifndef APICONTROLLER_H
#define APICONTROLLER_H

#include <QtCore>
#include <QString>
#include <QObject>
#include <QXmlStreamReader>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QUrl>
#include "film.h"


class APIController : public QObject
{
    Q_OBJECT
public:
    explicit APIController(QObject *parent = 0);
    QUrl url;
    QNetworkAccessManager qnam;
    QNetworkReply *reply;
    QFile *file;
    QString path;

signals:

    void autofill(Film f);

public slots:

    void getAnimeID(QString name);
    void httpReadyRead();
    void httpFinished();
};

#endif // API_H
