#ifndef RELACAOPACIENTEMEDICO_H
#define RELACAOPACIENTEMEDICO_H

#include <QWidget>

namespace Ui {
class relacaoPacienteMedico;
}

class relacaoPacienteMedico : public QWidget
{
    Q_OBJECT

public:
    explicit relacaoPacienteMedico(QWidget *parent = nullptr);
    ~relacaoPacienteMedico();

private slots:
    void on_voltarButton_clicked();

private:
    Ui::relacaoPacienteMedico *ui;
};

#endif // RELACAOPACIENTEMEDICO_H
