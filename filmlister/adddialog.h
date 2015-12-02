#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>
#include "film.h"

namespace Ui {
class AddDialog;
}

class AddDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddDialog(QWidget *parent = 0);
    ~AddDialog();
    QString name;
    QString date;
    QString director;
    QString actors;
    QString rating;
    QString genre;
    QString description;

private:
    Ui::AddDialog *ui;
signals:
    autoFill(QString);
public slots:
    void setFilmData();
    void initDialog(Film film);
    void on_autoFillButton_clicked();
};

#endif // ADDDIALOG_H
