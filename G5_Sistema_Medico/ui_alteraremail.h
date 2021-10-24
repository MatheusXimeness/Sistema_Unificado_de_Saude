/********************************************************************************
** Form generated from reading UI file 'alteraremail.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTERAREMAIL_H
#define UI_ALTERAREMAIL_H

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

class Ui_alterarEmail
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *voltarButton;
    QPushButton *confirmarButton;

    void setupUi(QWidget *alterarEmail)
    {
        if (alterarEmail->objectName().isEmpty())
            alterarEmail->setObjectName(QStringLiteral("alterarEmail"));
        alterarEmail->resize(495, 232);
        layoutWidget = new QWidget(alterarEmail);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 471, 201));
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

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_5->addWidget(lineEdit);


        horizontalLayout->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_6->addWidget(lineEdit_2);


        horizontalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_7->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_7->addWidget(lineEdit_3);


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


        retranslateUi(alterarEmail);

        QMetaObject::connectSlotsByName(alterarEmail);
    } // setupUi

    void retranslateUi(QWidget *alterarEmail)
    {
        alterarEmail->setWindowTitle(QApplication::translate("alterarEmail", "Alterar Email", Q_NULLPTR));
        label->setText(QApplication::translate("alterarEmail", "Email atual:", Q_NULLPTR));
        label_2->setText(QApplication::translate("alterarEmail", "Novo email: ", Q_NULLPTR));
        label_3->setText(QApplication::translate("alterarEmail", "Confirmar email:", Q_NULLPTR));
        voltarButton->setText(QApplication::translate("alterarEmail", "Voltar", Q_NULLPTR));
        confirmarButton->setText(QApplication::translate("alterarEmail", "Confirmar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class alterarEmail: public Ui_alterarEmail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERAREMAIL_H
