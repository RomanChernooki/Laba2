#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "film.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void addFilm(Film film);
    void editFilm(Film film);
    void deleteFilm(Film film);
signals:
    void addButtonPressed();
    void editButtonPressed(Film film);
    void deleteButtonPressed(Film film);

private slots:
    void on_addButton_pressed();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
