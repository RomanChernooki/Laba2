/********************************************************************************
** Form generated from reading UI file 'infowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOWINDOW_H
#define UI_INFOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InfoWindow
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_4;
    QSplitter *splitter_3;
    QSplitter *splitter_2;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label;
    QSplitter *splitter;
    QLabel *name;
    QLabel *director;
    QLabel *Genre;
    QLabel *Date;
    QLabel *Actors;
    QLabel *Rating;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *InfoWindow)
    {
        if (InfoWindow->objectName().isEmpty())
            InfoWindow->setObjectName(QStringLiteral("InfoWindow"));
        InfoWindow->resize(742, 476);
        verticalLayout = new QVBoxLayout(InfoWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter_4 = new QSplitter(InfoWindow);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Vertical);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        splitter_3->setOpaqueResize(false);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        label_6 = new QLabel(splitter_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        splitter_2->addWidget(label_6);
        label_4 = new QLabel(splitter_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        splitter_2->addWidget(label_4);
        label_3 = new QLabel(splitter_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        splitter_2->addWidget(label_3);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        splitter_2->addWidget(label_2);
        label_5 = new QLabel(splitter_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        splitter_2->addWidget(label_5);
        label = new QLabel(splitter_2);
        label->setObjectName(QStringLiteral("label"));
        splitter_2->addWidget(label);
        splitter_3->addWidget(splitter_2);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        name = new QLabel(splitter);
        name->setObjectName(QStringLiteral("name"));
        splitter->addWidget(name);
        director = new QLabel(splitter);
        director->setObjectName(QStringLiteral("director"));
        splitter->addWidget(director);
        Genre = new QLabel(splitter);
        Genre->setObjectName(QStringLiteral("Genre"));
        splitter->addWidget(Genre);
        Date = new QLabel(splitter);
        Date->setObjectName(QStringLiteral("Date"));
        splitter->addWidget(Date);
        Actors = new QLabel(splitter);
        Actors->setObjectName(QStringLiteral("Actors"));
        splitter->addWidget(Actors);
        Rating = new QLabel(splitter);
        Rating->setObjectName(QStringLiteral("Rating"));
        splitter->addWidget(Rating);
        splitter_3->addWidget(splitter);
        splitter_4->addWidget(splitter_3);
        textBrowser = new QTextBrowser(splitter_4);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        splitter_4->addWidget(textBrowser);

        verticalLayout->addWidget(splitter_4);


        retranslateUi(InfoWindow);

        QMetaObject::connectSlotsByName(InfoWindow);
    } // setupUi

    void retranslateUi(QDialog *InfoWindow)
    {
        InfoWindow->setWindowTitle(QApplication::translate("InfoWindow", "Dialog", 0));
        label_6->setText(QApplication::translate("InfoWindow", "Name:", 0));
        label_4->setText(QApplication::translate("InfoWindow", "Director:", 0));
        label_3->setText(QApplication::translate("InfoWindow", "Genre:", 0));
        label_2->setText(QApplication::translate("InfoWindow", "Date:", 0));
        label_5->setText(QApplication::translate("InfoWindow", "Actors", 0));
        label->setText(QApplication::translate("InfoWindow", "Rating:", 0));
        name->setText(QApplication::translate("InfoWindow", "Name", 0));
        director->setText(QApplication::translate("InfoWindow", "Director", 0));
        Genre->setText(QApplication::translate("InfoWindow", "Genre", 0));
        Date->setText(QApplication::translate("InfoWindow", "Date", 0));
        Actors->setText(QApplication::translate("InfoWindow", "Actors", 0));
        Rating->setText(QApplication::translate("InfoWindow", "Rating", 0));
    } // retranslateUi

};

namespace Ui {
    class InfoWindow: public Ui_InfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOWINDOW_H
