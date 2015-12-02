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
    if(ui->treeWidget->selectedItems().size()!=1)
        return;
    ui->treeWidget->selectedItems()[0]->setText(0,film.name);
    ui->treeWidget->selectedItems()[0]->setText(1,film.date);
    ui->treeWidget->selectedItems()[0]->setText(2,film.genre);
    ui->treeWidget->selectedItems()[0]->setText(3,film.rating);
}

void MainWindow::on_addButton_pressed()
{
    emit addButtonPressed();
}

void MainWindow::on_infoButton_clicked()
{
    if(ui->treeWidget->selectedItems().size()<1)
        return;
   emit getInfo(ui->treeWidget->selectedItems()[0]->text(0));
}

void MainWindow::on_editButton_clicked()
{
    if(ui->treeWidget->selectedItems().size()!=1)
        return;
    emit editButtonPressed(ui->treeWidget->selectedItems()[0]->text(0));
}

void MainWindow::on_deleteButton_clicked()
{
    if(ui->treeWidget->selectedItems().size()!=1)
        return;
    QMessageBox::StandardButton reply;
      reply = QMessageBox::question(this, "WARNING!111111111", "Really delete?",
                                    QMessageBox::Yes|QMessageBox::No);
      if (reply == QMessageBox::Yes) {
          QString name= ui->treeWidget->selectedItems()[0]->text(0);
           ui->treeWidget->clear();
        emit deleteButtonPressed(name);


      }
}
