#include "relacaopacientemedico.h"
#include "ui_relacaopacientemedico.h"

relacaoPacienteMedico::relacaoPacienteMedico(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::relacaoPacienteMedico)
{
    ui->setupUi(this);
}

relacaoPacienteMedico::~relacaoPacienteMedico()
{
    delete ui;
}

void relacaoPacienteMedico::on_voltarButton_clicked()
{
    this->close();
}
