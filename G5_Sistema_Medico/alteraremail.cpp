#include "alteraremail.h"
#include "ui_alteraremail.h"

alterarEmail::alterarEmail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::alterarEmail)
{
    ui->setupUi(this);
}

alterarEmail::~alterarEmail()
{
    delete ui;
}

void alterarEmail::on_voltarButton_clicked()
{
    this->close();
}
