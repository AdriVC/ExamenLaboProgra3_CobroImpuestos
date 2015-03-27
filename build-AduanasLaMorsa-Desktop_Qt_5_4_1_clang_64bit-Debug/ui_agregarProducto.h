/********************************************************************************
** Form generated from reading UI file 'agregarProducto.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGARPRODUCTO_H
#define UI_AGREGARPRODUCTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AgregarProducto
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_nombre;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *button_agregar;
    QDoubleSpinBox *doubleSpinBox_volumen;
    QDoubleSpinBox *doubleSpinBox_peso;
    QDoubleSpinBox *doubleSpinBox_precio;
    QComboBox *comboBox_clientes;
    QComboBox *comboBox_tipoProductos;

    void setupUi(QDialog *AgregarProducto)
    {
        if (AgregarProducto->objectName().isEmpty())
            AgregarProducto->setObjectName(QStringLiteral("AgregarProducto"));
        AgregarProducto->resize(396, 322);
        label = new QLabel(AgregarProducto);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 281, 31));
        QFont font;
        font.setFamily(QStringLiteral("Cooper Black"));
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(AgregarProducto);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 81, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Cooper Black"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        lineEdit_nombre = new QLineEdit(AgregarProducto);
        lineEdit_nombre->setObjectName(QStringLiteral("lineEdit_nombre"));
        lineEdit_nombre->setGeometry(QRect(130, 80, 241, 31));
        lineEdit_nombre->setFont(font1);
        label_3 = new QLabel(AgregarProducto);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 200, 91, 20));
        label_3->setFont(font1);
        label_4 = new QLabel(AgregarProducto);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(230, 200, 51, 16));
        label_4->setFont(font1);
        label_5 = new QLabel(AgregarProducto);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 120, 71, 20));
        label_5->setFont(font1);
        label_6 = new QLabel(AgregarProducto);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 230, 71, 20));
        label_6->setFont(font1);
        label_7 = new QLabel(AgregarProducto);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 160, 51, 21));
        label_7->setFont(font1);
        button_agregar = new QPushButton(AgregarProducto);
        button_agregar->setObjectName(QStringLiteral("button_agregar"));
        button_agregar->setGeometry(QRect(250, 260, 121, 51));
        button_agregar->setFont(font1);
        doubleSpinBox_volumen = new QDoubleSpinBox(AgregarProducto);
        doubleSpinBox_volumen->setObjectName(QStringLiteral("doubleSpinBox_volumen"));
        doubleSpinBox_volumen->setGeometry(QRect(130, 200, 69, 24));
        doubleSpinBox_volumen->setFont(font1);
        doubleSpinBox_peso = new QDoubleSpinBox(AgregarProducto);
        doubleSpinBox_peso->setObjectName(QStringLiteral("doubleSpinBox_peso"));
        doubleSpinBox_peso->setGeometry(QRect(300, 200, 69, 24));
        doubleSpinBox_peso->setFont(font1);
        doubleSpinBox_precio = new QDoubleSpinBox(AgregarProducto);
        doubleSpinBox_precio->setObjectName(QStringLiteral("doubleSpinBox_precio"));
        doubleSpinBox_precio->setGeometry(QRect(130, 230, 69, 24));
        doubleSpinBox_precio->setFont(font1);
        comboBox_clientes = new QComboBox(AgregarProducto);
        comboBox_clientes->setObjectName(QStringLiteral("comboBox_clientes"));
        comboBox_clientes->setGeometry(QRect(130, 120, 241, 31));
        comboBox_clientes->setFont(font1);
        comboBox_tipoProductos = new QComboBox(AgregarProducto);
        comboBox_tipoProductos->setObjectName(QStringLiteral("comboBox_tipoProductos"));
        comboBox_tipoProductos->setGeometry(QRect(130, 160, 241, 31));
        comboBox_tipoProductos->setFont(font1);

        retranslateUi(AgregarProducto);

        QMetaObject::connectSlotsByName(AgregarProducto);
    } // setupUi

    void retranslateUi(QDialog *AgregarProducto)
    {
        AgregarProducto->setWindowTitle(QApplication::translate("AgregarProducto", "Dialog", 0));
        label->setText(QApplication::translate("AgregarProducto", "Agregar Producto", 0));
        label_2->setText(QApplication::translate("AgregarProducto", "Nombre:", 0));
        label_3->setText(QApplication::translate("AgregarProducto", "Volumen:", 0));
        label_4->setText(QApplication::translate("AgregarProducto", "Peso:", 0));
        label_5->setText(QApplication::translate("AgregarProducto", "Cliente:", 0));
        label_6->setText(QApplication::translate("AgregarProducto", "Precio:", 0));
        label_7->setText(QApplication::translate("AgregarProducto", "Tipo:", 0));
        button_agregar->setText(QApplication::translate("AgregarProducto", "Agregar", 0));
        comboBox_tipoProductos->clear();
        comboBox_tipoProductos->insertItems(0, QStringList()
         << QApplication::translate("AgregarProducto", "Producto Educativo", 0)
         << QApplication::translate("AgregarProducto", "Producto Alcoholico", 0)
         << QApplication::translate("AgregarProducto", "Producto de Lujo", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class AgregarProducto: public Ui_AgregarProducto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGARPRODUCTO_H
