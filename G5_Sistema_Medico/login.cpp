#include <QtSql>
#include <QFileInfo>
#include <QDebug>
#include <QMessageBox>

#include "login.h"
//#include "ui_login1.h"
#include "ui_login.h"
#include "cadastro.h"
#include "menuwindow.h"

static QSqlDatabase dataBase = QSqlDatabase::addDatabase( "QSQLITE" );

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);

	// ----- DB CONNECTION ----- //
	dataBase.setDatabaseName( "/home/osboxes/Desktop/Projects/Trab_Engenharia_Software/dataBase/sus_db.db" );

	if( !dataBase.open() )
	{
		qDebug() << "não foi possível abrir o banco de dados" ;
	}
	// ----- ----- //

    connect(ui->cadastroButton, SIGNAL(clicked()), this, SLOT( openCadastro() ) );
    connect(ui->loginButton, SIGNAL(clicked()), this, SLOT( openMainMenu() ) );

}

login::~login()
{
    delete ui;
}

void login::openCadastro()
{
    Cadastro * cad = new Cadastro();
    cad->show();
    this->close();
}

void login::openMainMenu()
{
	QString cpf_username = ui->cpf_user->text();
	QString senha = ui->senha_user->text();

	if( !dataBase.isOpen() )
	{
		qDebug() << "Banco de dados não está aberto\n";
		return;
	}

	QSqlQuery query;
	if( query.exec("SELECT * FROM tb_login WHERE cpf='"+cpf_username+"' and senha='"+senha+"'") )
	{
		int cont = 0;
		while( query.next() )
		{
			cont++;
		}
		if( cont > 0 )
		{
			this->close();
			menuWindow * mainMain = new menuWindow();
			mainMain->show();
		} else
		{
			QMessageBox::warning( this, "", "Login não efetuado.\n"
												"Dados não registrados." );
			ui->cpf_user->clear();
			ui->senha_user->clear();
			ui->cpf_user->setFocus();
		}
	}
}
