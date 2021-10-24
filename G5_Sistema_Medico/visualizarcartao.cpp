#include "visualizarcartao.h"
#include "ui_visualizarcartao.h"
#include "menuwindow.h"

int line = 0;

visualizarCartao::visualizarCartao(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::visualizarCartao)
{
    ui->setupUi(this);

	connect(ui->pesquisarButton, SIGNAL(clicked()), this, SLOT( slotPesquisaPaciente() ) );

	showInitialItens();

}

visualizarCartao::~visualizarCartao()
{
    delete ui;
}

void visualizarCartao::configTable()
{
	ui->tableWidget->setColumnWidth( 0, 150 );
	ui->tableWidget->setColumnWidth( 1, 150 );
	ui->tableWidget->setColumnWidth( 2, 130 );
	ui->tableWidget->setColumnWidth( 3, 100 );
	ui->tableWidget->setColumnWidth( 4, 100 );

	//Nomeia Headers
	QStringList headers = {"Nome", "Vacina", "1º dose", "2ºdose", "Lote"};
	ui->tableWidget->setHorizontalHeaderLabels( headers );

	//Demais Configurações
	ui->tableWidget->setEditTriggers( QAbstractItemView::NoEditTriggers );
	ui->tableWidget->setSelectionBehavior( QAbstractItemView::SelectRows );
	ui->tableWidget->verticalHeader()->setVisible( false );
	ui->tableWidget->setStyleSheet( "QTableView { selection-background-color:blue }" );
}

void visualizarCartao::insertItensOnTable( const QSqlQuery & query )
{
	ui->tableWidget->insertRow(line);

	ui->tableWidget->setItem( line, 0, new QTableWidgetItem( query.value(1).toString() ) );
	ui->tableWidget->setItem( line, 1, new QTableWidgetItem( query.value(2).toString() ) );
	ui->tableWidget->setItem( line, 2, new QTableWidgetItem( query.value(3).toString() ) );
	ui->tableWidget->setItem( line, 3, new QTableWidgetItem( query.value(4).toString() ) );
	ui->tableWidget->setItem( line, 4, new QTableWidgetItem( query.value(5).toString() ) );

	ui->tableWidget->setRowHeight( line, 20 );
	line++;
}

void visualizarCartao::showInitialItens()
{
	QSqlQuery query;
	query.prepare("SELECT * FROM tb_cad_vacina");

	if( query.exec() )
	{
		line = 0;
		ui->tableWidget->setColumnCount( 5 );

		while( query.next() )
		{
			insertItensOnTable( query );
		}
		// ----- Configurações da Tabela ----- //
		configTable();
		// ----- ----- //
	} else
	{
		QMessageBox::warning( this, "ERRO", "Falha ao pesquisar na tabela de cadastro de vacinas" );
	}
}

void visualizarCartao::deletePreviousItens()
{
	ui->tableWidget->clear();
}

void visualizarCartao::slotPesquisaPaciente()
{
	QString name = ui->txt_nome->text();
	QSqlQuery query;

	deletePreviousItens();

	query.prepare("SELECT * FROM tb_cad_vacina WHERE nome ='"+name+"'");

	if( query.exec() )
	{
		line = 0;
		ui->tableWidget->setColumnCount( 5 );

		while( query.next() )
		{
			insertItensOnTable( query );
		}
		// ----- Configurações da Tabela ----- //
		configTable();
		// ----- ----- //
	}
	else
	{
		QMessageBox::warning( this, "ERRO", "Falha ao pesquisar usuário, verifique se o nome está correto." );
	}
}

void visualizarCartao::on_voltarButton_clicked()
{
    this->close();
}
