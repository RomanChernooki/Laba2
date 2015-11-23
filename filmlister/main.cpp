#include "mainwindow.h"
#include "interfacecontroller.h"
#include <QApplication>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InterfaceController c;
    MainWindow w;
    c.window=&w;
    QObject::connect(&w,SIGNAL(addButtonPressed()),&c,SLOT(callAddFilmDialog()));
    w.show();

    return a.exec();
}
