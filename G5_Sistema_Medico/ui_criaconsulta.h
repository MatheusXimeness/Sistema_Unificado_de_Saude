/********************************************************************************
** Form generated from reading UI file 'criaconsulta.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRIACONSULTA_H
#define UI_CRIACONSULTA_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_criaConsulta
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QPushButton *mostraHistorico;
    QLabel *label_2;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QTextEdit *textEdit_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QDateEdit *dateEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cancelarButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *criaConsulta)
    {
        if (criaConsulta->objectName().isEmpty())
            criaConsulta->setObjectName(QStringLiteral("criaConsulta"));
        criaConsulta->resize(493, 498);
        layoutWidget = new QWidget(criaConsulta);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 471, 477));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));

        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font1;
        font1.setPointSize(12);
        label_6->setFont(font1);

        horizontalLayout_6->addWidget(label_6);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_6->addWidget(lineEdit);


        verticalLayout_5->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(verticalLayout_5);

        mostraHistorico = new QPushButton(layoutWidget);
        mostraHistorico->setObjectName(QStringLiteral("mostraHistorico"));

        verticalLayout->addWidget(mostraHistorico);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        verticalLayout_2->addWidget(label_4);

        textEdit_2 = new QTextEdit(layoutWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        verticalLayout_2->addWidget(textEdit_2);


        verticalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setEnabled(true);

        horizontalLayout_5->addWidget(label_7);

        dateEdit_2 = new QDateEdit(layoutWidget);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setEnabled(true);
        dateEdit_2->setDate(QDate(2021, 1, 1));

        horizontalLayout_5->addWidget(dateEdit_2);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        cancelarButton = new QPushButton(layoutWidget);
        cancelarButton->setObjectName(QStringLiteral("cancelarButton"));

        horizontalLayout_2->addWidget(cancelarButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(criaConsulta);

        QMetaObject::connectSlotsByName(criaConsulta);
    } // setupUi

    void retranslateUi(QWidget *criaConsulta)
    {
        criaConsulta->setWindowTitle(QApplication::translate("criaConsulta", "Cadastrar Consultas", Q_NULLPTR));
        label_3->setText(QApplication::translate("criaConsulta", "Cadastrar Consultas", Q_NULLPTR));
        label_6->setText(QApplication::translate("criaConsulta", "Selecione o Paciente:", Q_NULLPTR));
        mostraHistorico->setText(QApplication::translate("criaConsulta", "Ver hist\303\263rico do paciente", Q_NULLPTR));
        label_2->setText(QApplication::translate("criaConsulta", "Adicionar Sintomas", Q_NULLPTR));
        label_4->setText(QApplication::translate("criaConsulta", "Prescrever tratamento", Q_NULLPTR));
        label_7->setText(QApplication::translate("criaConsulta", "Data:", Q_NULLPTR));
        label_5->setText(QApplication::translate("criaConsulta", "Busca de medicamentos", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("criaConsulta", "Buscar", Q_NULLPTR));
        label->setText(QApplication::translate("criaConsulta", "Anexar Documento", Q_NULLPTR));
        pushButton->setText(QApplication::translate("criaConsulta", "...", Q_NULLPTR));
        cancelarButton->setText(QApplication::translate("criaConsulta", "Cancelar", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("criaConsulta", "Gerar atestado", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class criaConsulta: public Ui_criaConsulta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRIACONSULTA_H
