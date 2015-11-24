#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>

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
private slots:
    void setFilmData();
};

#endif // ADDDIALOG_H
