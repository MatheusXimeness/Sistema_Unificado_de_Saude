/********************************************************************************
** Form generated from reading UI file 'alterarsenha.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTERARSENHA_H
#define UI_ALTERARSENHA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alterarSenha
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *txt_senha;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *txt_nova_senha;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLineEdit *txt_confirmar_senha;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *voltarButton;
    QPushButton *confirmarButton;

    void setupUi(QWidget *alterarSenha)
    {
        if (alterarSenha->objectName().isEmpty())
            alterarSenha->setObjectName(QStringLiteral("alterarSenha"));
        alterarSenha->resize(506, 220);
        layoutWidget = new QWidget(alterarSenha);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 471, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        txt_senha = new QLineEdit(layoutWidget);
        txt_senha->setObjectName(QStringLiteral("txt_senha"));
        txt_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(txt_senha);


        horizontalLayout->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        txt_nova_senha = new QLineEdit(layoutWidget);
        txt_nova_senha->setObjectName(QStringLiteral("txt_nova_senha"));
        txt_nova_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_6->addWidget(txt_nova_senha);


        horizontalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_7->addWidget(label_3);

        txt_confirmar_senha = new QLineEdit(layoutWidget);
        txt_confirmar_senha->setObjectName(QStringLiteral("txt_confirmar_senha"));
        txt_confirmar_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_7->addWidget(txt_confirmar_senha);


        horizontalLayout_3->addLayout(horizontalLayout_7);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        voltarButton = new QPushButton(layoutWidget);
        voltarButton->setObjectName(QStringLiteral("voltarButton"));

        horizontalLayout_4->addWidget(voltarButton);

        confirmarButton = new QPushButton(layoutWidget);
        confirmarButton->setObjectName(QStringLiteral("confirmarButton"));

        horizontalLayout_4->addWidget(confirmarButton);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(alterarSenha);

        QMetaObject::connectSlotsByName(alterarSenha);
    } // setupUi

    void retranslateUi(QWidget *alterarSenha)
    {
        alterarSenha->setWindowTitle(QApplication::translate("alterarSenha", "Alterar senha", Q_NULLPTR));
        label->setText(QApplication::translate("alterarSenha", "Senha atual:", Q_NULLPTR));
        label_2->setText(QApplication::translate("alterarSenha", "Nova senha: ", Q_NULLPTR));
        label_3->setText(QApplication::translate("alterarSenha", "Confirmar senha:", Q_NULLPTR));
        voltarButton->setText(QApplication::translate("alterarSenha", "Voltar", Q_NULLPTR));
        confirmarButton->setText(QApplication::translate("alterarSenha", "Confirmar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class alterarSenha: public Ui_alterarSenha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERARSENHA_H
