#include "configperfil.h"
#include "ui_configperfil.h"
#include "alteraremail.h"
#include "alterarsenha.h"

configPerfil::configPerfil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::configPerfil)
{
    ui->setupUi(this);
}

configPerfil::~configPerfil()
{
    delete ui;
}

void configPerfil::on_voltarButton_clicked()
{
    this->close();
}

void configPerfil::on_emailButton_clicked()
{
    alterarEmail *altEmail = new alterarEmail();
    altEmail->show();
}

void configPerfil::on_senhaButton_clicked()
{
    alterarSenha * altSenha = new alterarSenha();
    altSenha->show();
}
