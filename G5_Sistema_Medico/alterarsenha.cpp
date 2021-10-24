#include "alterarsenha.h"
#include "ui_alterarsenha.h"

alterarSenha::alterarSenha(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::alterarSenha)
{
    ui->setupUi(this);
}

alterarSenha::~alterarSenha()
{
    delete ui;
}

void alterarSenha::on_voltarButton_clicked()
{
    this->close();
}
