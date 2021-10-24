#ifndef ALTERAREMAIL_H
#define ALTERAREMAIL_H

#include <QWidget>

namespace Ui {
class alterarEmail;
}

class alterarEmail : public QWidget
{
    Q_OBJECT

public:
    explicit alterarEmail(QWidget *parent = nullptr);
    ~alterarEmail();

private slots:
    void on_voltarButton_clicked();

private:
    Ui::alterarEmail *ui;
};

#endif // ALTERAREMAIL_H
