/********************************************************************************
** Form generated from reading UI file 'adddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIALOG_H
#define UI_ADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_AddDialog
{
public:
    QPlainTextEdit *plainTextEdit;
    QSplitter *splitter;
    QLineEdit *lineActors;
    QLineEdit *lineJanr;
    QLineEdit *lineRating;
    QSplitter *splitter_2;
    QLineEdit *lineName;
    QLineEdit *lineYear;
    QLineEdit *lineDirector;
    QSplitter *splitter_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSplitter *splitter_4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QSplitter *splitter_5;
    QPushButton *autoFillButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddDialog)
    {
        if (AddDialog->objectName().isEmpty())
            AddDialog->setObjectName(QStringLiteral("AddDialog"));
        AddDialog->resize(560, 279);
        plainTextEdit = new QPlainTextEdit(AddDialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 130, 541, 111));
        splitter = new QSplitter(AddDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(370, 40, 181, 81));
        splitter->setOrientation(Qt::Vertical);
        lineActors = new QLineEdit(splitter);
        lineActors->setObjectName(QStringLiteral("lineActors"));
        splitter->addWidget(lineActors);
        lineJanr = new QLineEdit(splitter);
        lineJanr->setObjectName(QStringLiteral("lineJanr"));
        splitter->addWidget(lineJanr);
        lineRating = new QLineEdit(splitter);
        lineRating->setObjectName(QStringLiteral("lineRating"));
        splitter->addWidget(lineRating);
        splitter_2 = new QSplitter(AddDialog);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(120, 40, 133, 81));
        splitter_2->setOrientation(Qt::Vertical);
        lineName = new QLineEdit(splitter_2);
        lineName->setObjectName(QStringLiteral("lineName"));
        splitter_2->addWidget(lineName);
        lineYear = new QLineEdit(splitter_2);
        lineYear->setObjectName(QStringLiteral("lineYear"));
        splitter_2->addWidget(lineYear);
        lineDirector = new QLineEdit(splitter_2);
        lineDirector->setObjectName(QStringLiteral("lineDirector"));
        splitter_2->addWidget(lineDirector);
        splitter_3 = new QSplitter(AddDialog);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setGeometry(QRect(6, 40, 101, 81));
        splitter_3->setOrientation(Qt::Vertical);
        label = new QLabel(splitter_3);
        label->setObjectName(QStringLiteral("label"));
        splitter_3->addWidget(label);
        label_2 = new QLabel(splitter_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        splitter_3->addWidget(label_2);
        label_3 = new QLabel(splitter_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        splitter_3->addWidget(label_3);
        splitter_4 = new QSplitter(AddDialog);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setGeometry(QRect(266, 40, 101, 81));
        splitter_4->setOrientation(Qt::Vertical);
        label_4 = new QLabel(splitter_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        splitter_4->addWidget(label_4);
        label_5 = new QLabel(splitter_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        splitter_4->addWidget(label_5);
        label_6 = new QLabel(splitter_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        splitter_4->addWidget(label_6);
        splitter_5 = new QSplitter(AddDialog);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setGeometry(QRect(10, 250, 541, 23));
        splitter_5->setOrientation(Qt::Horizontal);
        autoFillButton = new QPushButton(splitter_5);
        autoFillButton->setObjectName(QStringLiteral("autoFillButton"));
        splitter_5->addWidget(autoFillButton);
        buttonBox = new QDialogButtonBox(splitter_5);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        splitter_5->addWidget(buttonBox);

        retranslateUi(AddDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddDialog);
    } // setupUi

    void retranslateUi(QDialog *AddDialog)
    {
        AddDialog->setWindowTitle(QApplication::translate("AddDialog", "Dialog", 0));
        lineActors->setText(QString());
        label->setText(QApplication::translate("AddDialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", 0));
        label_2->setText(QApplication::translate("AddDialog", "\320\223\320\276\320\264", 0));
        label_3->setText(QApplication::translate("AddDialog", "\320\240\320\265\320\266\320\270\321\201\321\201\321\221\321\200", 0));
        label_4->setText(QApplication::translate("AddDialog", "\320\220\320\272\321\202\321\221\321\200\321\213", 0));
        label_5->setText(QApplication::translate("AddDialog", "\320\226\320\260\320\275\321\200", 0));
        label_6->setText(QApplication::translate("AddDialog", "\320\236\321\206\320\265\320\275\320\272\320\260", 0));
        autoFillButton->setText(QApplication::translate("AddDialog", "Autofill", 0));
    } // retranslateUi

};

namespace Ui {
    class AddDialog: public Ui_AddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIALOG_H
