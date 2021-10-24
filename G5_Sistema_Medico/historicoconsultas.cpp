#include "historicoconsultas.h"
#include "ui_historicoconsultas.h"

historicoConsultas::historicoConsultas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::historicoConsultas)
{
    ui->setupUi(this);
}

historicoConsultas::~historicoConsultas()
{
    delete ui;
}

void historicoConsultas::on_voltarButton_clicked()
{
    this->close();
}
