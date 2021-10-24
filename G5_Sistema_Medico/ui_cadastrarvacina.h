/********************************************************************************
** Form generated from reading UI file 'cadastrarvacina.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRARVACINA_H
#define UI_CADASTRARVACINA_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastrarVacina
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *txt_nome;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *txt_vacina;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QDateEdit *txt_data1;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBox;
    QLabel *labelSegundaData;
    QDateEdit *txt_data2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *txt_lote;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *cancelarButton;
    QPushButton *cadastrarButton;

    void setupUi(QWidget *cadastrarVacina)
    {
        if (cadastrarVacina->objectName().isEmpty())
            cadastrarVacina->setObjectName(QStringLiteral("cadastrarVacina"));
        cadastrarVacina->resize(433, 320);
        layoutWidget = new QWidget(cadastrarVacina);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 411, 301));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);

        horizontalLayout_6->addWidget(label_2);

        txt_nome = new QLineEdit(layoutWidget);
        txt_nome->setObjectName(QStringLiteral("txt_nome"));

        horizontalLayout_6->addWidget(txt_nome);


        verticalLayout_6->addLayout(horizontalLayout_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        horizontalLayout_5->addWidget(label_3);

        txt_vacina = new QLineEdit(layoutWidget);
        txt_vacina->setObjectName(QStringLiteral("txt_vacina"));

        horizontalLayout_5->addWidget(txt_vacina);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_6->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        horizontalLayout_7->addWidget(label_4);

        txt_data1 = new QDateEdit(layoutWidget);
        txt_data1->setObjectName(QStringLiteral("txt_data1"));
        txt_data1->setDate(QDate(2021, 1, 1));

        horizontalLayout_7->addWidget(txt_data1);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_8->addWidget(checkBox);

        labelSegundaData = new QLabel(layoutWidget);
        labelSegundaData->setObjectName(QStringLiteral("labelSegundaData"));
        labelSegundaData->setEnabled(false);

        horizontalLayout_8->addWidget(labelSegundaData);

        txt_data2 = new QDateEdit(layoutWidget);
        txt_data2->setObjectName(QStringLiteral("txt_data2"));
        txt_data2->setEnabled(false);
        txt_data2->setDate(QDate(2021, 1, 1));

        horizontalLayout_8->addWidget(txt_data2);


        horizontalLayout->addLayout(horizontalLayout_8);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        horizontalLayout_4->addWidget(label_6);

        txt_lote = new QLineEdit(layoutWidget);
        txt_lote->setObjectName(QStringLiteral("txt_lote"));

        horizontalLayout_4->addWidget(txt_lote);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        cancelarButton = new QPushButton(layoutWidget);
        cancelarButton->setObjectName(QStringLiteral("cancelarButton"));

        horizontalLayout_3->addWidget(cancelarButton);

        cadastrarButton = new QPushButton(layoutWidget);
        cadastrarButton->setObjectName(QStringLiteral("cadastrarButton"));

        horizontalLayout_3->addWidget(cadastrarButton);


        verticalLayout_6->addLayout(horizontalLayout_3);


        retranslateUi(cadastrarVacina);

        QMetaObject::connectSlotsByName(cadastrarVacina);
    } // setupUi

    void retranslateUi(QWidget *cadastrarVacina)
    {
        cadastrarVacina->setWindowTitle(QApplication::translate("cadastrarVacina", "Cadastro de Vacina", Q_NULLPTR));
        label->setText(QApplication::translate("cadastrarVacina", "Cadastrar Vacina", Q_NULLPTR));
        label_2->setText(QApplication::translate("cadastrarVacina", "Selecione o paciente:", Q_NULLPTR));
        label_3->setText(QApplication::translate("cadastrarVacina", "Selecione a vacina:", Q_NULLPTR));
        label_4->setText(QApplication::translate("cadastrarVacina", "Defina a data de aplica\303\247\303\243o da vacina:", Q_NULLPTR));
        checkBox->setText(QApplication::translate("cadastrarVacina", "Segunda Dose", Q_NULLPTR));
        labelSegundaData->setText(QApplication::translate("cadastrarVacina", "Data:", Q_NULLPTR));
        label_6->setText(QApplication::translate("cadastrarVacina", "Lote:", Q_NULLPTR));
        cancelarButton->setText(QApplication::translate("cadastrarVacina", "Cancelar", Q_NULLPTR));
        cadastrarButton->setText(QApplication::translate("cadastrarVacina", "Cadastrar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class cadastrarVacina: public Ui_cadastrarVacina {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRARVACINA_H
