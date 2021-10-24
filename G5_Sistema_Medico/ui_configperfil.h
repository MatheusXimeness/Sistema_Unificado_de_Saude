/********************************************************************************
** Form generated from reading UI file 'configperfil.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGPERFIL_H
#define UI_CONFIGPERFIL_H

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

class Ui_configPerfil
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *emailButton;
    QPushButton *senhaButton;
    QPushButton *voltarButton;

    void setupUi(QWidget *configPerfil)
    {
        if (configPerfil->objectName().isEmpty())
            configPerfil->setObjectName(QStringLiteral("configPerfil"));
        configPerfil->resize(592, 301);
        layoutWidget = new QWidget(configPerfil);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 571, 281));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_8->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_8->addWidget(lineEdit);


        horizontalLayout->addLayout(horizontalLayout_8);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_7->addWidget(label_4);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_7->addWidget(lineEdit_4);


        horizontalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_6->addWidget(lineEdit_2);


        horizontalLayout_3->addLayout(horizontalLayout_6);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_5->addWidget(lineEdit_3);


        horizontalLayout_4->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(verticalLayout_4);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        emailButton = new QPushButton(layoutWidget);
        emailButton->setObjectName(QStringLiteral("emailButton"));

        verticalLayout_2->addWidget(emailButton);

        senhaButton = new QPushButton(layoutWidget);
        senhaButton->setObjectName(QStringLiteral("senhaButton"));

        verticalLayout_2->addWidget(senhaButton);

        voltarButton = new QPushButton(layoutWidget);
        voltarButton->setObjectName(QStringLiteral("voltarButton"));

        verticalLayout_2->addWidget(voltarButton);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(configPerfil);

        QMetaObject::connectSlotsByName(configPerfil);
    } // setupUi

    void retranslateUi(QWidget *configPerfil)
    {
        configPerfil->setWindowTitle(QApplication::translate("configPerfil", "Perfil", Q_NULLPTR));
        label_3->setText(QApplication::translate("configPerfil", "Meu perfil", Q_NULLPTR));
        label_2->setText(QApplication::translate("configPerfil", "Nome:", Q_NULLPTR));
        label_4->setText(QApplication::translate("configPerfil", "Email:", Q_NULLPTR));
        label_5->setText(QApplication::translate("configPerfil", "CPF  :", Q_NULLPTR));
        label_6->setText(QApplication::translate("configPerfil", "Telefone:", Q_NULLPTR));
        emailButton->setText(QApplication::translate("configPerfil", "Alterar email", Q_NULLPTR));
        senhaButton->setText(QApplication::translate("configPerfil", "Alterar senha", Q_NULLPTR));
        voltarButton->setText(QApplication::translate("configPerfil", "Voltar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class configPerfil: public Ui_configPerfil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGPERFIL_H
