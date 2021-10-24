#include "consultasmarcadas.h"
#include "ui_consultasmarcadas.h"

consultasMarcadas::consultasMarcadas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::consultasMarcadas)
{
    ui->setupUi(this);
}

consultasMarcadas::~consultasMarcadas()
{
    delete ui;
}

void consultasMarcadas::on_voltarButton_clicked()
{
    this->close();
}
