/********************************************************************************
** Form generated from reading UI file 'visualizarcartao.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALIZARCARTAO_H
#define UI_VISUALIZARCARTAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_visualizarCartao
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_nome;
    QPushButton *pesquisarButton;
    QTableWidget *tableWidget;
    QPushButton *voltarButton;

    void setupUi(QWidget *visualizarCartao)
    {
        if (visualizarCartao->objectName().isEmpty())
            visualizarCartao->setObjectName(QStringLiteral("visualizarCartao"));
        visualizarCartao->resize(573, 342);
        layoutWidget = new QWidget(visualizarCartao);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 551, 319));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        txt_nome = new QLineEdit(layoutWidget);
        txt_nome->setObjectName(QStringLiteral("txt_nome"));

        horizontalLayout_2->addWidget(txt_nome);


        verticalLayout->addLayout(horizontalLayout_2);

        pesquisarButton = new QPushButton(layoutWidget);
        pesquisarButton->setObjectName(QStringLiteral("pesquisarButton"));

        verticalLayout->addWidget(pesquisarButton);

        tableWidget = new QTableWidget(layoutWidget);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        voltarButton = new QPushButton(layoutWidget);
        voltarButton->setObjectName(QStringLiteral("voltarButton"));

        verticalLayout->addWidget(voltarButton);


        retranslateUi(visualizarCartao);

        QMetaObject::connectSlotsByName(visualizarCartao);
    } // setupUi

    void retranslateUi(QWidget *visualizarCartao)
    {
        visualizarCartao->setWindowTitle(QApplication::translate("visualizarCartao", "Cart\303\243o de Vacinas", Q_NULLPTR));
        label->setText(QApplication::translate("visualizarCartao", "Cart\303\243o de Vacina", Q_NULLPTR));
        label_2->setText(QApplication::translate("visualizarCartao", "Nome:", Q_NULLPTR));
        pesquisarButton->setText(QApplication::translate("visualizarCartao", "Pesquisar", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("visualizarCartao", "1 -", Q_NULLPTR));
        voltarButton->setText(QApplication::translate("visualizarCartao", "Voltar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class visualizarCartao: public Ui_visualizarCartao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALIZARCARTAO_H
