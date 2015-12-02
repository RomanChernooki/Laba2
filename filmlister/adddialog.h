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
    void initDialog(Film film);
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
private slots:
    void setFilmData();
    void on_autoFillButton_clicked();
};

#endif // ADDDIALOG_H
