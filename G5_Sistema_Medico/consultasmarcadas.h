#ifndef CONSULTASMARCADAS_H
#define CONSULTASMARCADAS_H

#include <QWidget>

namespace Ui {
class consultasMarcadas;
}

class consultasMarcadas : public QWidget
{
    Q_OBJECT

public:
    explicit consultasMarcadas(QWidget *parent = nullptr);
    ~consultasMarcadas();

private slots:
    void on_voltarButton_clicked();

private:
    Ui::consultasMarcadas *ui;
};

#endif // CONSULTASMARCADAS_H
