#include "menuwindow.h"
#include "ui_menuwindow.h"
#include "visualizarcartao.h"
#include "cadastrarvacina.h"
#include "relacaopacientemedico.h"
#include "criaconsulta.h"
#include "consultasmarcadas.h"
#include "historicoconsultas.h"
#include "configperfil.h"
#include "login.h"

menuWindow::menuWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menuWindow)
{
    ui->setupUi(this);

}

menuWindow::~menuWindow()
{
    delete ui;
}

void menuWindow::on_actionCadastrar_triggered()
{
    cadastrarVacina * cadVac =  new cadastrarVacina();
    cadVac->show();
}


void menuWindow::on_actionVisualizarCartao_triggered()
{
    visualizarCartao * card = new visualizarCartao();
    card->show();
}

void menuWindow::on_relacionarMedicoPaciente_triggered()
{
    relacaoPacienteMedico * relMedPac = new relacaoPacienteMedico();
    relMedPac->show();
}

void menuWindow::on_actionCriarConsulta_triggered()
{
    criaConsulta * criaCons =  new criaConsulta();
    criaCons->show();
}

void menuWindow::on_actionConsultasMarcadas_triggered()
{
    consultasMarcadas * consultasMarc = new consultasMarcadas();
    consultasMarc->show();
}

void menuWindow::on_actionHistoricoConsultas_triggered()
{
    historicoConsultas * mostraHist = new historicoConsultas();
    mostraHist->show();
}

void menuWindow::on_actionConsultarCartao_triggered()
{
    visualizarCartao * card = new visualizarCartao();
    card->show();
}

void menuWindow::on_actionConfiguracoes_triggered()
{
    configPerfil * config = new configPerfil();
    config->show();
}

void menuWindow::on_actionSair_triggered()
{
    login * backToLogin = new login();
    this->close();
    backToLogin->show();
}
