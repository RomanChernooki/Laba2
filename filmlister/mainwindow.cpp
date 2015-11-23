#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addFilm(Film film)
{
    //TODO everything
}

void MainWindow::deleteFilm(Film film)
{
    //TODO everything
}

void MainWindow::editFilm(Film film)
{
    //TODO everything
}

void MainWindow::on_addButton_pressed()
{
    emit addButtonPressed();
}
