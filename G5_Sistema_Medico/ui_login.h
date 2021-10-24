/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *edtNumDefeitos_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *cpf_user;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Senha;
    QLineEdit *senha_user;
    QPushButton *loginButton;
    QPushButton *cadastroButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(442, 235);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        edtNumDefeitos_2 = new QLabel(centralwidget);
        edtNumDefeitos_2->setObjectName(QStringLiteral("edtNumDefeitos_2"));
        edtNumDefeitos_2->setGeometry(QRect(1370, 500, 133, 17));
        edtNumDefeitos_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        edtNumDefeitos_2->setWordWrap(false);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 421, 177));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);

        horizontalLayout_4->addWidget(label);

        cpf_user = new QLineEdit(layoutWidget);
        cpf_user->setObjectName(QStringLiteral("cpf_user"));

        horizontalLayout_4->addWidget(cpf_user);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_Senha = new QLabel(layoutWidget);
        label_Senha->setObjectName(QStringLiteral("label_Senha"));
        label_Senha->setFont(font1);

        horizontalLayout_3->addWidget(label_Senha);

        senha_user = new QLineEdit(layoutWidget);
        senha_user->setObjectName(QStringLiteral("senha_user"));
        senha_user->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(senha_user);


        verticalLayout->addLayout(horizontalLayout_3);

        loginButton = new QPushButton(layoutWidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));

        verticalLayout->addWidget(loginButton);

        cadastroButton = new QPushButton(layoutWidget);
        cadastroButton->setObjectName(QStringLiteral("cadastroButton"));
        cadastroButton->setEnabled(true);

        verticalLayout->addWidget(cadastroButton);


        verticalLayout_2->addLayout(verticalLayout);

        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 442, 22));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Login", Q_NULLPTR));
        edtNumDefeitos_2->setText(QString());
        label_2->setText(QApplication::translate("login", "Entrar", Q_NULLPTR));
        label->setText(QApplication::translate("login", "CPF:   ", Q_NULLPTR));
        label_Senha->setText(QApplication::translate("login", "Senha:", Q_NULLPTR));
        loginButton->setText(QApplication::translate("login", "Login", Q_NULLPTR));
        cadastroButton->setText(QApplication::translate("login", "Fazer Cadastro", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
