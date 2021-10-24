#ifndef CRIACONSULTA_H
#define CRIACONSULTA_H

#include <QWidget>

namespace Ui {
class criaConsulta;
}

class criaConsulta : public QWidget
{
    Q_OBJECT

public:
    explicit criaConsulta(QWidget *parent = nullptr);
    ~criaConsulta();

private slots:
    void on_cancelarButton_clicked();

    void on_mostraHistorico_clicked();

private:
    Ui::criaConsulta *ui;
};

#endif // CRIACONSULTA_H
