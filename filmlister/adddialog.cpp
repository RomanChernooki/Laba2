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

void AddDialog::initDialog(Film film)
{
    ui->lineActors->setText(film.actors);
    ui->lineDirector->setText(film.director);
    ui->lineJanr->setText(film.genre);
    ui->lineName->setText(film.name);
    ui->plainTextEdit->setPlainText(film.description);
    ui->lineRating->setText(film.rating);
    ui->lineYear->setText(film.date);
    setFilmData();
}

void AddDialog::setFilmData()
{
    this->actors=ui->lineActors->text();
    this->director=ui->lineDirector->text();
    this->genre=ui->lineJanr->text();
    this->rating=ui->lineRating->text();
    this->date=ui->lineYear->text();
    this->name=ui->lineName->text();
    this->description=ui->plainTextEdit->document()->toPlainText();
}

void AddDialog::on_autoFillButton_clicked()
{
    emit autoFill(ui->lineName->text());
}
