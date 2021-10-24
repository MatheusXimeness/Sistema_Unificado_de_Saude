#ifndef HISTORICOCONSULTAS_H
#define HISTORICOCONSULTAS_H

#include <QWidget>

namespace Ui {
class historicoConsultas;
}

class historicoConsultas : public QWidget
{
    Q_OBJECT

public:
    explicit historicoConsultas(QWidget *parent = nullptr);
    ~historicoConsultas();

private slots:
    void on_voltarButton_clicked();

private:
    Ui::historicoConsultas *ui;
};

#endif // HISTORICOCONSULTAS_H
