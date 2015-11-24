#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

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
    QTreeWidgetItem *item=new QTreeWidgetItem;
    item->setText(0,film.name);
    qDebug()<<film.name;
    item->setText(1,film.date);
    item->setText(2,film.genre);
    item->setText(3,film.rating);
    ui->treeWidget->addTopLevelItem(item);
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
