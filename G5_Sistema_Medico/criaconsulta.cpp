#include "criaconsulta.h"
#include "ui_criaconsulta.h"
#include "historicoconsultas.h"

criaConsulta::criaConsulta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::criaConsulta)
{
    ui->setupUi(this);
}

criaConsulta::~criaConsulta()
{
    delete ui;
}

void criaConsulta::on_cancelarButton_clicked()
{
    this->close();
}

void criaConsulta::on_mostraHistorico_clicked()
{
    historicoConsultas * mostraHist = new historicoConsultas();
    mostraHist->show();
}
