#include "mainwindow.h"
#include "interfacecontroller.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InterfaceController c;
    MainWindow w;
    w.show();

    return a.exec();
}
