#ifndef CONFIGPERFIL_H
#define CONFIGPERFIL_H

#include <QWidget>

namespace Ui {
class configPerfil;
}

class configPerfil : public QWidget
{
    Q_OBJECT

public:
    explicit configPerfil(QWidget *parent = nullptr);
    ~configPerfil();

private slots:
    void on_voltarButton_clicked();

    void on_emailButton_clicked();

    void on_senhaButton_clicked();

private:
    Ui::configPerfil *ui;
};

#endif // CONFIGPERFIL_H
