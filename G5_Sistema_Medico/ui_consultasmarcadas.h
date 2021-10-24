/********************************************************************************
** Form generated from reading UI file 'consultasmarcadas.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTASMARCADAS_H
#define UI_CONSULTASMARCADAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_consultasMarcadas
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *voltarButton;

    void setupUi(QWidget *consultasMarcadas)
    {
        if (consultasMarcadas->objectName().isEmpty())
            consultasMarcadas->setObjectName(QStringLiteral("consultasMarcadas"));
        consultasMarcadas->resize(502, 367);
        layoutWidget = new QWidget(consultasMarcadas);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 477, 321));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        listWidget = new QListWidget(layoutWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setEnabled(false);

        verticalLayout_3->addWidget(listWidget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setEnabled(false);

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(false);

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(false);

        horizontalLayout_4->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setEnabled(false);

        horizontalLayout_3->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setEnabled(false);

        horizontalLayout_3->addWidget(pushButton_5);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        voltarButton = new QPushButton(consultasMarcadas);
        voltarButton->setObjectName(QStringLiteral("voltarButton"));
        voltarButton->setGeometry(QRect(10, 340, 75, 23));

        retranslateUi(consultasMarcadas);

        QMetaObject::connectSlotsByName(consultasMarcadas);
    } // setupUi

    void retranslateUi(QWidget *consultasMarcadas)
    {
        consultasMarcadas->setWindowTitle(QApplication::translate("consultasMarcadas", "Consultas Marcadas", Q_NULLPTR));
        label->setText(QApplication::translate("consultasMarcadas", "Selecione a consulta:", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("consultasMarcadas", "Consulta com Jo\303\243o", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("consultasMarcadas", "Carregar Informa\303\247\303\265es", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("consultasMarcadas", "Dados da Consulta", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        pushButton_4->setText(QApplication::translate("consultasMarcadas", "Cancelar consulta", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("consultasMarcadas", "Relat\303\263rio", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("consultasMarcadas", "Concluir consulta", Q_NULLPTR));
        label_2->setText(QApplication::translate("consultasMarcadas", "Adicionar consulta ao hist\303\263rico do paciente:", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("consultasMarcadas", "Cancelar", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("consultasMarcadas", "Ok", Q_NULLPTR));
        voltarButton->setText(QApplication::translate("consultasMarcadas", "Voltar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class consultasMarcadas: public Ui_consultasMarcadas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTASMARCADAS_H
