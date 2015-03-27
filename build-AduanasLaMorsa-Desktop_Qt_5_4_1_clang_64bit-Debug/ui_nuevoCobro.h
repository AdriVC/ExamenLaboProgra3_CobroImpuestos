/********************************************************************************
** Form generated from reading UI file 'nuevoCobro.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUEVOCOBRO_H
#define UI_NUEVOCOBRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_nuevoCobro
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox_clientes;
    QComboBox *comboBox_productos;
    QPushButton *button_efectuarCobro;
    QPushButton *button_cancelar;

    void setupUi(QDialog *nuevoCobro)
    {
        if (nuevoCobro->objectName().isEmpty())
            nuevoCobro->setObjectName(QStringLiteral("nuevoCobro"));
        nuevoCobro->resize(360, 247);
        label = new QLabel(nuevoCobro);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 10, 241, 41));
        QFont font;
        font.setFamily(QStringLiteral("Cooper Black"));
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(nuevoCobro);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 80, 71, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Cooper Black"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(nuevoCobro);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 120, 91, 16));
        label_3->setFont(font1);
        comboBox_clientes = new QComboBox(nuevoCobro);
        comboBox_clientes->setObjectName(QStringLiteral("comboBox_clientes"));
        comboBox_clientes->setGeometry(QRect(120, 75, 211, 31));
        comboBox_clientes->setFont(font1);
        comboBox_productos = new QComboBox(nuevoCobro);
        comboBox_productos->setObjectName(QStringLiteral("comboBox_productos"));
        comboBox_productos->setGeometry(QRect(120, 120, 211, 31));
        comboBox_productos->setFont(font1);
        button_efectuarCobro = new QPushButton(nuevoCobro);
        button_efectuarCobro->setObjectName(QStringLiteral("button_efectuarCobro"));
        button_efectuarCobro->setGeometry(QRect(170, 170, 181, 61));
        button_efectuarCobro->setFont(font1);
        button_cancelar = new QPushButton(nuevoCobro);
        button_cancelar->setObjectName(QStringLiteral("button_cancelar"));
        button_cancelar->setGeometry(QRect(30, 170, 131, 61));
        button_cancelar->setFont(font1);

        retranslateUi(nuevoCobro);

        QMetaObject::connectSlotsByName(nuevoCobro);
    } // setupUi

    void retranslateUi(QDialog *nuevoCobro)
    {
        nuevoCobro->setWindowTitle(QApplication::translate("nuevoCobro", "Dialog", 0));
        label->setText(QApplication::translate("nuevoCobro", "Cobrar Impesto", 0));
        label_2->setText(QApplication::translate("nuevoCobro", "Cliente:", 0));
        label_3->setText(QApplication::translate("nuevoCobro", "Producto:", 0));
        button_efectuarCobro->setText(QApplication::translate("nuevoCobro", "Efectuar Cobro", 0));
        button_cancelar->setText(QApplication::translate("nuevoCobro", "Cancelar", 0));
    } // retranslateUi

};

namespace Ui {
    class nuevoCobro: public Ui_nuevoCobro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUEVOCOBRO_H
