#include <QtSql>
#include <QFileInfo>
#include <QFile>
#include <QDebug>
#include <QMessageBox>

#include "cadastrarvacina.h"
#include "ui_cadastrarvacina.h"

cadastrarVacina::cadastrarVacina(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cadastrarVacina)
{
    ui->setupUi(this);

	connect( ui->checkBox, SIGNAL( stateChanged(int) ), this, SLOT( segundaDoseCheckChange(int) ) );

}

void cadastrarVacina::segundaDoseCheckChange( int state )
{
	if( state == Qt::Checked )
	{
		ui->labelSegundaData->setEnabled( true );
		ui->txt_data2->setEnabled( true );

	} else if( state == Qt::Unchecked )
	{
		ui->labelSegundaData->setEnabled( false );
		ui->txt_data2->setEnabled( false );
	}
}

cadastrarVacina::~cadastrarVacina()
{
    delete ui;
}

void cadastrarVacina::on_cancelarButton_clicked()
{
    this->close();
}

void cadastrarVacina::on_cadastrarButton_clicked()
{
	QString nome = ui->txt_nome->text();
	QString vacina = ui->txt_vacina->text();
	QString data1 = ui->txt_data1->text();
	QString loteTxt = ui->txt_lote->text();
	QString data2 = "";

	QSqlQuery query;

	if( ui->checkBox->isChecked() )
	{
		data2 = ui->txt_data2->text();

	}

	query.prepare( "INSERT INTO tb_cad_vacina (nome,vacina,data1,data2,lote) VALUES "
				   "('"+nome+"','"+vacina+"','"+data1+"','"+data2+"', '"+loteTxt+"')" );

	if( query.exec() )
	{
		QMessageBox::information( this, "", "Registros gravados com sucesso" );
		ui->txt_nome->clear();
		ui->txt_vacina->clear();
		ui->txt_data1->clear();
		ui->txt_data2->clear();
		ui->txt_lote->clear();
		ui->txt_nome->setFocus();
	} else
	{
		QMessageBox::warning( this, "", "Não foi possível realziar o cadastro.\n"
										"Dados incompatíveis." );
	}

	this->close();
}
