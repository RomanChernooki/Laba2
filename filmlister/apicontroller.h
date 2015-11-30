#ifndef APICONTROLLER_H
#define APICONTROLLER_H

#include <QtCore>
#include <QString>
#include <QObject>
#include <QXmlStreamReader>

class APIController : public QObject
{
    Q_OBJECT
public:
    explicit APIController(QObject *parent = 0);

signals:

public slots:

    void getAnimeID(QString name);
};

#endif // API_H
