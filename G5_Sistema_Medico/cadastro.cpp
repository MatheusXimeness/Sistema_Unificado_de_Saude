#include "cadastro.h"
#include "ui_cadastro.h"
#include "login.h"
#include <string>

Cadastro::Cadastro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Cadastro)
{
    ui->setupUi(this);

    connect( ui->cadastrarButton, SIGNAL(clicked()), this, SLOT( openLoginToNewUser() ) );
    connect( ui->cancelarButton, SIGNAL(clicked()), this, SLOT( backToLogin() ) );

    connect( ui->enfermeiroCB, SIGNAL( stateChanged(int) ), this, SLOT( enfermeiroCheckChange(int) ) );
    connect( ui->medicoCB, SIGNAL( stateChanged(int) ), this, SLOT( medicoCheckChange(int) ) );
    connect( ui->pacienteCB, SIGNAL( stateChanged(int) ), this, SLOT( pacienteCheckChange(int) ) );

}

Cadastro::~Cadastro()
{
    delete ui;
}

void Cadastro::pacienteCheckChange( int state )
{
    if( state == Qt::Unchecked  )
    {
        ui->medicoCB->setEnabled( true );
        ui->enfermeiroCB->setEnabled( true );

    }
    else if( state == Qt::Checked )
    {
        ui->medicoCB->setEnabled( false );
        ui->enfermeiroCB->setEnabled( false );
    }
}

void Cadastro::enfermeiroCheckChange( int state )
{
    if( state == Qt::Unchecked  )
    {
        ui->medicoCB->setEnabled( true );
        ui->pacienteCB->setEnabled( true );

        ui->textCOREN->setEnabled( false );
        ui->labelCOREN->setEnabled( false );

    }
    else if( state == Qt::Checked )
    {
        ui->medicoCB->setEnabled( false );
        ui->pacienteCB->setEnabled( false );

        ui->textCOREN->setEnabled( true );
        ui->labelCOREN->setEnabled( true );
    }
}

void Cadastro::medicoCheckChange( int state )
{
    if( state == Qt::Unchecked  )
    {
        ui->pacienteCB->setEnabled( true );
        ui->enfermeiroCB->setEnabled( true );

        ui->textCRM->setEnabled( false );
        ui->labelCRM->setEnabled( false );

    }
    else if( state == Qt::Checked )
    {
        ui->pacienteCB->setEnabled( false );
        ui->enfermeiroCB->setEnabled( false );

        ui->textCRM->setEnabled( true );
        ui->labelCRM->setEnabled( true );
    }
}


void Cadastro::backToLogin()
{
    login * back = new login();
    back->show();
    this->close();
}

void Cadastro::openLoginToNewUser()
{
    login * back = new login();
    back->show();
    this->close();
}
