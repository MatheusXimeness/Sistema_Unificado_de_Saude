/********************************************************************************
** Form generated from reading UI file 'cadastro.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRO_H
#define UI_CADASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cadastro
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *pacienteCB;
    QCheckBox *medicoCB;
    QCheckBox *enfermeiroCB;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout;
    QLabel *labelCOREN;
    QLineEdit *textCOREN;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labelCRM;
    QLineEdit *textCRM;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QDateEdit *dateEdit;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *cancelarButton;
    QVBoxLayout *verticalLayout_4;
    QPushButton *cadastrarButton;

    void setupUi(QWidget *Cadastro)
    {
        if (Cadastro->objectName().isEmpty())
            Cadastro->setObjectName(QStringLiteral("Cadastro"));
        Cadastro->resize(565, 477);
        layoutWidget = new QWidget(Cadastro);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 541, 451));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pacienteCB = new QCheckBox(layoutWidget);
        pacienteCB->setObjectName(QStringLiteral("pacienteCB"));

        horizontalLayout_2->addWidget(pacienteCB);

        medicoCB = new QCheckBox(layoutWidget);
        medicoCB->setObjectName(QStringLiteral("medicoCB"));

        horizontalLayout_2->addWidget(medicoCB);

        enfermeiroCB = new QCheckBox(layoutWidget);
        enfermeiroCB->setObjectName(QStringLiteral("enfermeiroCB"));

        horizontalLayout_2->addWidget(enfermeiroCB);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);

        horizontalLayout_6->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_6->addWidget(lineEdit);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        horizontalLayout_7->addWidget(label_3);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_7->addWidget(lineEdit_2);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(14);
        label_2->setFont(font2);

        horizontalLayout_8->addWidget(label_2);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_8->addWidget(lineEdit_3);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);

        horizontalLayout_9->addWidget(label_4);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_9->addWidget(lineEdit_4);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);

        horizontalLayout_10->addWidget(label_5);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_10->addWidget(lineEdit_5);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelCOREN = new QLabel(layoutWidget);
        labelCOREN->setObjectName(QStringLiteral("labelCOREN"));
        labelCOREN->setEnabled(false);
        labelCOREN->setFont(font2);

        horizontalLayout->addWidget(labelCOREN);

        textCOREN = new QLineEdit(layoutWidget);
        textCOREN->setObjectName(QStringLiteral("textCOREN"));
        textCOREN->setEnabled(false);

        horizontalLayout->addWidget(textCOREN);


        verticalLayout_5->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_5);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        labelCRM = new QLabel(layoutWidget);
        labelCRM->setObjectName(QStringLiteral("labelCRM"));
        labelCRM->setEnabled(false);
        labelCRM->setFont(font2);

        horizontalLayout_11->addWidget(labelCRM);

        textCRM = new QLineEdit(layoutWidget);
        textCRM->setObjectName(QStringLiteral("textCRM"));
        textCRM->setEnabled(false);

        horizontalLayout_11->addWidget(textCRM);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));

        verticalLayout->addLayout(horizontalLayout_4);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font2);

        verticalLayout->addWidget(label_9);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        verticalLayout->addWidget(dateEdit);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));

        verticalLayout->addLayout(verticalLayout_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font2);

        horizontalLayout_3->addWidget(label_7);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_3->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        cancelarButton = new QPushButton(layoutWidget);
        cancelarButton->setObjectName(QStringLiteral("cancelarButton"));

        horizontalLayout_5->addWidget(cancelarButton);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        cadastrarButton = new QPushButton(layoutWidget);
        cadastrarButton->setObjectName(QStringLiteral("cadastrarButton"));

        verticalLayout_4->addWidget(cadastrarButton);


        horizontalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_5);


        retranslateUi(Cadastro);

        QMetaObject::connectSlotsByName(Cadastro);
    } // setupUi

    void retranslateUi(QWidget *Cadastro)
    {
        Cadastro->setWindowTitle(QApplication::translate("Cadastro", "Cadastro", Q_NULLPTR));
        label_6->setText(QApplication::translate("Cadastro", "Cadastro", Q_NULLPTR));
        pacienteCB->setText(QApplication::translate("Cadastro", "Paciente", Q_NULLPTR));
        medicoCB->setText(QApplication::translate("Cadastro", "M\303\251dico", Q_NULLPTR));
        enfermeiroCB->setText(QApplication::translate("Cadastro", "Enfermeiro", Q_NULLPTR));
        label->setText(QApplication::translate("Cadastro", "Nome:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Cadastro", "Email:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Cadastro", "CPF:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Cadastro", "Telefone:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Cadastro", "Senha:", Q_NULLPTR));
        labelCOREN->setText(QApplication::translate("Cadastro", "COREN: (Enfermeiro)", Q_NULLPTR));
        labelCRM->setText(QApplication::translate("Cadastro", "CRM: (M\303\251dico)", Q_NULLPTR));
        label_9->setText(QApplication::translate("Cadastro", "Nascimento: (OPCIONAL)", Q_NULLPTR));
        label_7->setText(QApplication::translate("Cadastro", "Sexo: (OPCIONAL)", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Cadastro", "Masculino", Q_NULLPTR)
         << QApplication::translate("Cadastro", "Feminino ", Q_NULLPTR)
         << QApplication::translate("Cadastro", "Prefiro nao informar", Q_NULLPTR)
        );
        cancelarButton->setText(QApplication::translate("Cadastro", "Cancelar", Q_NULLPTR));
        cadastrarButton->setText(QApplication::translate("Cadastro", "Cadastrar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Cadastro: public Ui_Cadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO_H
