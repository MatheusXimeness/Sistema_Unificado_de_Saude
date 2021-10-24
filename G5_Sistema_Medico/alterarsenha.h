#ifndef ALTERARSENHA_H
#define ALTERARSENHA_H

#include <QWidget>

namespace Ui {
class alterarSenha;
}

class alterarSenha : public QWidget
{
    Q_OBJECT

public:
    explicit alterarSenha(QWidget *parent = nullptr);
    ~alterarSenha();

private slots:
    void on_voltarButton_clicked();

private:
    Ui::alterarSenha *ui;
};

#endif // ALTERARSENHA_H
