/********************************************************************************
** Form generated from reading UI file 'menuwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWINDOW_H
#define UI_MENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menuWindow
{
public:
    QAction *actionAdiconar_Sintomas;
    QAction *actionCadastrar;
    QAction *actionConfiguracoes;
    QAction *relacionarMedicoPaciente;
    QAction *actionHistoricoConsultas;
    QAction *actionCriarConsulta;
    QAction *actionCancelar_Consulta;
    QAction *actionInforma_es_de_consulta;
    QAction *actionRelat_rio_da_consulta;
    QAction *actionConsultasMarcadas;
    QAction *actionConsultar_hist_rico;
    QAction *actionVisualizarCartao;
    QAction *actionConsultarCartao;
    QAction *actionImprimir;
    QAction *actionGerar_QR_Code;
    QAction *actionSair;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuVacina;
    QMenu *menuPerfil;
    QMenu *menuMedicamentos;
    QMenu *menuConsultas;
    QMenu *menuConsultar_cart_o_de_vacinas;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *menuWindow)
    {
        if (menuWindow->objectName().isEmpty())
            menuWindow->setObjectName(QStringLiteral("menuWindow"));
        menuWindow->resize(772, 93);
        QFont font;
        font.setFamily(QStringLiteral("Tahoma"));
        menuWindow->setFont(font);
        actionAdiconar_Sintomas = new QAction(menuWindow);
        actionAdiconar_Sintomas->setObjectName(QStringLiteral("actionAdiconar_Sintomas"));
        actionCadastrar = new QAction(menuWindow);
        actionCadastrar->setObjectName(QStringLiteral("actionCadastrar"));
        actionConfiguracoes = new QAction(menuWindow);
        actionConfiguracoes->setObjectName(QStringLiteral("actionConfiguracoes"));
        relacionarMedicoPaciente = new QAction(menuWindow);
        relacionarMedicoPaciente->setObjectName(QStringLiteral("relacionarMedicoPaciente"));
        actionHistoricoConsultas = new QAction(menuWindow);
        actionHistoricoConsultas->setObjectName(QStringLiteral("actionHistoricoConsultas"));
        actionCriarConsulta = new QAction(menuWindow);
        actionCriarConsulta->setObjectName(QStringLiteral("actionCriarConsulta"));
        actionCancelar_Consulta = new QAction(menuWindow);
        actionCancelar_Consulta->setObjectName(QStringLiteral("actionCancelar_Consulta"));
        actionInforma_es_de_consulta = new QAction(menuWindow);
        actionInforma_es_de_consulta->setObjectName(QStringLiteral("actionInforma_es_de_consulta"));
        actionRelat_rio_da_consulta = new QAction(menuWindow);
        actionRelat_rio_da_consulta->setObjectName(QStringLiteral("actionRelat_rio_da_consulta"));
        actionConsultasMarcadas = new QAction(menuWindow);
        actionConsultasMarcadas->setObjectName(QStringLiteral("actionConsultasMarcadas"));
        actionConsultar_hist_rico = new QAction(menuWindow);
        actionConsultar_hist_rico->setObjectName(QStringLiteral("actionConsultar_hist_rico"));
        actionVisualizarCartao = new QAction(menuWindow);
        actionVisualizarCartao->setObjectName(QStringLiteral("actionVisualizarCartao"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icones/icones/apps.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVisualizarCartao->setIcon(icon);
        actionConsultarCartao = new QAction(menuWindow);
        actionConsultarCartao->setObjectName(QStringLiteral("actionConsultarCartao"));
        actionImprimir = new QAction(menuWindow);
        actionImprimir->setObjectName(QStringLiteral("actionImprimir"));
        actionImprimir->setEnabled(false);
        actionGerar_QR_Code = new QAction(menuWindow);
        actionGerar_QR_Code->setObjectName(QStringLiteral("actionGerar_QR_Code"));
        actionGerar_QR_Code->setEnabled(false);
        actionSair = new QAction(menuWindow);
        actionSair->setObjectName(QStringLiteral("actionSair"));
        centralwidget = new QWidget(menuWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        menuWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(menuWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 772, 23));
        menuVacina = new QMenu(menubar);
        menuVacina->setObjectName(QStringLiteral("menuVacina"));
        menuPerfil = new QMenu(menubar);
        menuPerfil->setObjectName(QStringLiteral("menuPerfil"));
        menuMedicamentos = new QMenu(menubar);
        menuMedicamentos->setObjectName(QStringLiteral("menuMedicamentos"));
        menuConsultas = new QMenu(menubar);
        menuConsultas->setObjectName(QStringLiteral("menuConsultas"));
        menuConsultar_cart_o_de_vacinas = new QMenu(menubar);
        menuConsultar_cart_o_de_vacinas->setObjectName(QStringLiteral("menuConsultar_cart_o_de_vacinas"));
        menuWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(menuWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        menuWindow->setStatusBar(statusbar);

        menubar->addAction(menuMedicamentos->menuAction());
        menubar->addAction(menuVacina->menuAction());
        menubar->addAction(menuConsultas->menuAction());
        menubar->addAction(menuConsultar_cart_o_de_vacinas->menuAction());
        menubar->addAction(menuPerfil->menuAction());
        menuVacina->addAction(actionCadastrar);
        menuVacina->addAction(actionVisualizarCartao);
        menuPerfil->addAction(actionConfiguracoes);
        menuPerfil->addAction(actionHistoricoConsultas);
        menuPerfil->addAction(actionSair);
        menuMedicamentos->addAction(relacionarMedicoPaciente);
        menuConsultas->addAction(actionCriarConsulta);
        menuConsultas->addAction(actionConsultasMarcadas);
        menuConsultar_cart_o_de_vacinas->addAction(actionConsultarCartao);
        menuConsultar_cart_o_de_vacinas->addAction(actionImprimir);
        menuConsultar_cart_o_de_vacinas->addAction(actionGerar_QR_Code);

        retranslateUi(menuWindow);

        QMetaObject::connectSlotsByName(menuWindow);
    } // setupUi

    void retranslateUi(QMainWindow *menuWindow)
    {
        menuWindow->setWindowTitle(QApplication::translate("menuWindow", "Sistema Unificado de Sa\303\272de", Q_NULLPTR));
        actionAdiconar_Sintomas->setText(QApplication::translate("menuWindow", "Adiconar Sintomas", Q_NULLPTR));
        actionCadastrar->setText(QApplication::translate("menuWindow", "&Cadastrar vacina", Q_NULLPTR));
        actionConfiguracoes->setText(QApplication::translate("menuWindow", "&Configura\303\247\303\265es", Q_NULLPTR));
        relacionarMedicoPaciente->setText(QApplication::translate("menuWindow", "&Relacionar Paciente/M\303\251dico", Q_NULLPTR));
        actionHistoricoConsultas->setText(QApplication::translate("menuWindow", "&Hist\303\263rico de Consultas", Q_NULLPTR));
        actionCriarConsulta->setText(QApplication::translate("menuWindow", "&Criar consulta", Q_NULLPTR));
        actionCancelar_Consulta->setText(QApplication::translate("menuWindow", "Cancelar consulta", Q_NULLPTR));
        actionInforma_es_de_consulta->setText(QApplication::translate("menuWindow", "Informa\303\247\303\265es de consulta", Q_NULLPTR));
        actionRelat_rio_da_consulta->setText(QApplication::translate("menuWindow", "Relat\303\263rio da consulta", Q_NULLPTR));
        actionConsultasMarcadas->setText(QApplication::translate("menuWindow", "Consultas &marcadas", Q_NULLPTR));
        actionConsultar_hist_rico->setText(QApplication::translate("menuWindow", "Consultar hist\303\263rico", Q_NULLPTR));
        actionVisualizarCartao->setText(QApplication::translate("menuWindow", "&Visualizar cart\303\243o", Q_NULLPTR));
        actionConsultarCartao->setText(QApplication::translate("menuWindow", "&Consultar Cart\303\243o", Q_NULLPTR));
        actionImprimir->setText(QApplication::translate("menuWindow", "&Imprimir", Q_NULLPTR));
        actionGerar_QR_Code->setText(QApplication::translate("menuWindow", "&Gerar QR Code", Q_NULLPTR));
        actionSair->setText(QApplication::translate("menuWindow", "&Sair", Q_NULLPTR));
        menuVacina->setTitle(QApplication::translate("menuWindow", "Vacina&r", Q_NULLPTR));
        menuPerfil->setTitle(QApplication::translate("menuWindow", "Perfi&l", Q_NULLPTR));
        menuMedicamentos->setTitle(QApplication::translate("menuWindow", "&Veincular m\303\251dico e paciente", Q_NULLPTR));
        menuConsultas->setTitle(QApplication::translate("menuWindow", "Consulta &m\303\251dica", Q_NULLPTR));
        menuConsultar_cart_o_de_vacinas->setTitle(QApplication::translate("menuWindow", "Co&nsultar cart\303\243o de vacinas", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class menuWindow: public Ui_menuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWINDOW_H
