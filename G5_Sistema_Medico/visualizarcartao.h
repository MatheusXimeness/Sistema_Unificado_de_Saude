#ifndef VISUALIZARCARTAO_H
#define VISUALIZARCARTAO_H

#include <QWidget>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class visualizarCartao;
}

class visualizarCartao : public QWidget
{
    Q_OBJECT

public:
    explicit visualizarCartao(QWidget *parent = nullptr);
    ~visualizarCartao();

private slots:

    void on_voltarButton_clicked();
	void slotPesquisaPaciente();

private:
    Ui::visualizarCartao *ui;

	void showInitialItens();
	void deletePreviousItens();
	void configTable();
	void insertItensOnTable( const QSqlQuery & );
};

#endif // VISUALIZARCARTAO_H
