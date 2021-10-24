/********************************************************************************
** Form generated from reading UI file 'relacaopacientemedico.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELACAOPACIENTEMEDICO_H
#define UI_RELACAOPACIENTEMEDICO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_relacaoPacienteMedico
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QListWidget *listWidget;
    QPushButton *voltarButton;

    void setupUi(QWidget *relacaoPacienteMedico)
    {
        if (relacaoPacienteMedico->objectName().isEmpty())
            relacaoPacienteMedico->setObjectName(QStringLiteral("relacaoPacienteMedico"));
        relacaoPacienteMedico->resize(542, 291);
        layoutWidget = new QWidget(relacaoPacienteMedico);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 521, 268));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        verticalLayout_2->addWidget(label_2);

        listWidget = new QListWidget(layoutWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout_2->addWidget(listWidget);

        voltarButton = new QPushButton(layoutWidget);
        voltarButton->setObjectName(QStringLiteral("voltarButton"));

        verticalLayout_2->addWidget(voltarButton);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(relacaoPacienteMedico);

        QMetaObject::connectSlotsByName(relacaoPacienteMedico);
    } // setupUi

    void retranslateUi(QWidget *relacaoPacienteMedico)
    {
        relacaoPacienteMedico->setWindowTitle(QApplication::translate("relacaoPacienteMedico", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("relacaoPacienteMedico", "Relacionar Paciente M\303\251dico", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("relacaoPacienteMedico", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">Mariana da Silva</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("relacaoPacienteMedico", "Enviar Solicita\303\247\303\243o", Q_NULLPTR));
        label_2->setText(QApplication::translate("relacaoPacienteMedico", "Notifica\303\247\303\265es", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("relacaoPacienteMedico", "Jo\303\243o Pedro recusou", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        voltarButton->setText(QApplication::translate("relacaoPacienteMedico", "Voltar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class relacaoPacienteMedico: public Ui_relacaoPacienteMedico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELACAOPACIENTEMEDICO_H
