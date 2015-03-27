/********************************************************************************
** Form generated from reading UI file 'setTasas.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTASAS_H
#define UI_SETTASAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_setTasas
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_educativos;
    QDoubleSpinBox *doubleSpinBox_alcoholicos;
    QDoubleSpinBox *doubleSpinBox_deLujo;
    QPushButton *button_aceptar;

    void setupUi(QDialog *setTasas)
    {
        if (setTasas->objectName().isEmpty())
            setTasas->setObjectName(QStringLiteral("setTasas"));
        setTasas->resize(385, 233);
        label = new QLabel(setTasas);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 10, 261, 31));
        QFont font;
        font.setFamily(QStringLiteral("Cooper Black"));
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(setTasas);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 70, 221, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Cooper Black"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(setTasas);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 100, 211, 21));
        label_3->setFont(font1);
        label_4 = new QLabel(setTasas);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 130, 171, 21));
        label_4->setFont(font1);
        doubleSpinBox_educativos = new QDoubleSpinBox(setTasas);
        doubleSpinBox_educativos->setObjectName(QStringLiteral("doubleSpinBox_educativos"));
        doubleSpinBox_educativos->setGeometry(QRect(290, 70, 69, 24));
        doubleSpinBox_educativos->setFont(font1);
        doubleSpinBox_educativos->setMaximum(1);
        doubleSpinBox_educativos->setSingleStep(0.01);
        doubleSpinBox_alcoholicos = new QDoubleSpinBox(setTasas);
        doubleSpinBox_alcoholicos->setObjectName(QStringLiteral("doubleSpinBox_alcoholicos"));
        doubleSpinBox_alcoholicos->setGeometry(QRect(290, 100, 69, 24));
        doubleSpinBox_alcoholicos->setFont(font1);
        doubleSpinBox_alcoholicos->setMaximum(1);
        doubleSpinBox_alcoholicos->setSingleStep(0.01);
        doubleSpinBox_deLujo = new QDoubleSpinBox(setTasas);
        doubleSpinBox_deLujo->setObjectName(QStringLiteral("doubleSpinBox_deLujo"));
        doubleSpinBox_deLujo->setGeometry(QRect(290, 130, 69, 24));
        doubleSpinBox_deLujo->setFont(font1);
        doubleSpinBox_deLujo->setMaximum(1);
        doubleSpinBox_deLujo->setSingleStep(0.01);
        button_aceptar = new QPushButton(setTasas);
        button_aceptar->setObjectName(QStringLiteral("button_aceptar"));
        button_aceptar->setGeometry(QRect(220, 170, 141, 51));
        button_aceptar->setFont(font1);

        retranslateUi(setTasas);

        QMetaObject::connectSlotsByName(setTasas);
    } // setupUi

    void retranslateUi(QDialog *setTasas)
    {
        setTasas->setWindowTitle(QApplication::translate("setTasas", "Dialog", 0));
        label->setText(QApplication::translate("setTasas", "Configurar Tasas", 0));
        label_2->setText(QApplication::translate("setTasas", "Productos Eductativos:", 0));
        label_3->setText(QApplication::translate("setTasas", "Productos Alcoholicos:", 0));
        label_4->setText(QApplication::translate("setTasas", "Productos de Lujo:", 0));
        button_aceptar->setText(QApplication::translate("setTasas", "Aceptar", 0));
    } // retranslateUi

};

namespace Ui {
    class setTasas: public Ui_setTasas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTASAS_H
