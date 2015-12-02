#ifndef INFOWINDOW_H
#define INFOWINDOW_H

#include "film.h"
#include <QDialog>

namespace Ui {
class InfoWindow;
}

class InfoWindow : public QDialog
{
    Q_OBJECT

public:
    explicit InfoWindow(QWidget *parent = 0);
    void initWindow(Film film);
    ~InfoWindow();

private:
    Ui::InfoWindow *ui;
};

#endif // INFOWINDOW_H
