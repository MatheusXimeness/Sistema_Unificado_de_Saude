/********************************************************************************
** Form generated from reading UI file 'historicoconsultas.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORICOCONSULTAS_H
#define UI_HISTORICOCONSULTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_historicoConsultas
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listWidget;
    QPushButton *voltarButton;

    void setupUi(QWidget *historicoConsultas)
    {
        if (historicoConsultas->objectName().isEmpty())
            historicoConsultas->setObjectName(QStringLiteral("historicoConsultas"));
        historicoConsultas->resize(372, 193);
        layoutWidget = new QWidget(historicoConsultas);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 351, 171));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        listWidget = new QListWidget(layoutWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        voltarButton = new QPushButton(layoutWidget);
        voltarButton->setObjectName(QStringLiteral("voltarButton"));

        verticalLayout->addWidget(voltarButton);


        retranslateUi(historicoConsultas);

        QMetaObject::connectSlotsByName(historicoConsultas);
    } // setupUi

    void retranslateUi(QWidget *historicoConsultas)
    {
        historicoConsultas->setWindowTitle(QApplication::translate("historicoConsultas", "Consultas", Q_NULLPTR));
        label->setText(QApplication::translate("historicoConsultas", "Consultas:", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("historicoConsultas", "Consulta com Dr. Lauro", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        voltarButton->setText(QApplication::translate("historicoConsultas", "Voltar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class historicoConsultas: public Ui_historicoConsultas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORICOCONSULTAS_H
