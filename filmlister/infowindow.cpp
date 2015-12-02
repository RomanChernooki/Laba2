#include "infowindow.h"
#include "ui_infowindow.h"

InfoWindow::InfoWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoWindow)
{
    ui->setupUi(this);
}
void InfoWindow::initWindow(Film film)
{
    ui->Actors->setText(film.actors);
    ui->Date->setText(film.date);
    ui->textBrowser->setText(film.description);
    ui->director->setText(film.director);
    ui->Genre->setText(film.genre);
    ui->name->setText(film.name);
    ui->Rating->setText(film.rating);
}

InfoWindow::~InfoWindow()
{
    delete ui;
}
