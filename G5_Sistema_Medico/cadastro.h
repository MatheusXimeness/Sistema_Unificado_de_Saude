#ifndef CADASTRO_H
#define CADASTRO_H

#include <QWidget>
namespace Ui {
class Cadastro;
}

class Cadastro : public QWidget
{
    Q_OBJECT

public:
    explicit Cadastro(QWidget *parent = nullptr);
    ~Cadastro();
    Ui::Cadastro *ui;

    // para fazer validações de permissão de acesso a telas
    bool m_enfermeiro;
    bool m_medico;
    bool m_paciente;

private slots:
    void backToLogin();
    void openLoginToNewUser();
    void medicoCheckChange( int state );
    void pacienteCheckChange( int state );
    void enfermeiroCheckChange( int state );

private:

};

#endif // CADASTRO_H
