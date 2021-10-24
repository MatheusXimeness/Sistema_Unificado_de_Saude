#ifndef CADASTRARVACINA_H
#define CADASTRARVACINA_H

#include <QWidget>

namespace Ui {
class cadastrarVacina;
}

class cadastrarVacina : public QWidget
{
    Q_OBJECT

public:
    explicit cadastrarVacina(QWidget *parent = nullptr);
    ~cadastrarVacina();

private slots:
    void on_cancelarButton_clicked();
	void segundaDoseCheckChange( int state );

    void on_cadastrarButton_clicked();

private:
    Ui::cadastrarVacina *ui;
};

#endif // CADASTRARVACINA_H
