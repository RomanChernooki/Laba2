#include "adddialog.h"
#include "ui_adddialog.h"

AddDialog::AddDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddDialog)
{
    ui->setupUi(this);
    connect(this,SIGNAL(accepted()),this,SLOT(setFilmData()));
}

AddDialog::~AddDialog()
{
    delete ui;
}
void AddDialog::setFilmData()
{
    this->actors=ui->lineActors->text();
    this->director=ui->lineDirector->text();
    this->genre=ui->lineJanr->text();
    this->rating=ui->lineRating->text();
    this->date=ui->lineYear->text();
    this->name=ui->lineName->text();
}
