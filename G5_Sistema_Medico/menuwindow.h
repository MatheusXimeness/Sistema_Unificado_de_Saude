#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QMainWindow>

namespace Ui {
class menuWindow;
}

class menuWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit menuWindow(QWidget *parent = nullptr);
    ~menuWindow();

private:
    Ui::menuWindow *ui;

private slots:
    void on_actionCadastrar_triggered();
    void on_actionVisualizarCartao_triggered();
    void on_relacionarMedicoPaciente_triggered();
    void on_actionCriarConsulta_triggered();
    void on_actionConsultasMarcadas_triggered();
    void on_actionHistoricoConsultas_triggered();
    void on_actionConsultarCartao_triggered();
    void on_actionConfiguracoes_triggered();
    void on_actionSair_triggered();
};

#endif // MENUWINDOW_H
