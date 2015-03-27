/********************************************************************************
** Form generated from reading UI file 'agregarCliente.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGARCLIENTE_H
#define UI_AGREGARCLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AgregarCliente
{
public:
    QLabel *label;
    QLineEdit *lineEdit_nombre;
    QLabel *label_2;
    QPushButton *button_agregar;

    void setupUi(QDialog *AgregarCliente)
    {
        if (AgregarCliente->objectName().isEmpty())
            AgregarCliente->setObjectName(QStringLiteral("AgregarCliente"));
        AgregarCliente->resize(400, 204);
        label = new QLabel(AgregarCliente);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 10, 251, 51));
        QFont font;
        font.setFamily(QStringLiteral("Cooper Black"));
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        lineEdit_nombre = new QLineEdit(AgregarCliente);
        lineEdit_nombre->setObjectName(QStringLiteral("lineEdit_nombre"));
        lineEdit_nombre->setGeometry(QRect(120, 90, 251, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Cooper Black"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        lineEdit_nombre->setFont(font1);
        label_2 = new QLabel(AgregarCliente);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 100, 91, 16));
        label_2->setFont(font1);
        button_agregar = new QPushButton(AgregarCliente);
        button_agregar->setObjectName(QStringLiteral("button_agregar"));
        button_agregar->setGeometry(QRect(230, 140, 141, 51));
        button_agregar->setFont(font1);

        retranslateUi(AgregarCliente);

        QMetaObject::connectSlotsByName(AgregarCliente);
    } // setupUi

    void retranslateUi(QDialog *AgregarCliente)
    {
        AgregarCliente->setWindowTitle(QApplication::translate("AgregarCliente", "Dialog", 0));
        label->setText(QApplication::translate("AgregarCliente", "Agregar Cliente", 0));
        label_2->setText(QApplication::translate("AgregarCliente", "Nombre:", 0));
        button_agregar->setText(QApplication::translate("AgregarCliente", "Agregar", 0));
    } // retranslateUi

};

namespace Ui {
    class AgregarCliente: public Ui_AgregarCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGARCLIENTE_H
