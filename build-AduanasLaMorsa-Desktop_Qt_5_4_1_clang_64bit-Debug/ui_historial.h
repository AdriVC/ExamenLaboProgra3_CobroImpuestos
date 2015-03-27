/********************************************************************************
** Form generated from reading UI file 'historial.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORIAL_H
#define UI_HISTORIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Historial
{
public:
    QLabel *label;
    QTextEdit *textEdit_historial;
    QPushButton *button_cerrar;

    void setupUi(QDialog *Historial)
    {
        if (Historial->objectName().isEmpty())
            Historial->setObjectName(QStringLiteral("Historial"));
        Historial->resize(400, 368);
        label = new QLabel(Historial);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 301, 51));
        QFont font;
        font.setFamily(QStringLiteral("Cooper Black"));
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        textEdit_historial = new QTextEdit(Historial);
        textEdit_historial->setObjectName(QStringLiteral("textEdit_historial"));
        textEdit_historial->setEnabled(false);
        textEdit_historial->setGeometry(QRect(20, 60, 361, 241));
        textEdit_historial->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        button_cerrar = new QPushButton(Historial);
        button_cerrar->setObjectName(QStringLiteral("button_cerrar"));
        button_cerrar->setGeometry(QRect(242, 310, 141, 51));

        retranslateUi(Historial);

        QMetaObject::connectSlotsByName(Historial);
    } // setupUi

    void retranslateUi(QDialog *Historial)
    {
        Historial->setWindowTitle(QApplication::translate("Historial", "Dialog", 0));
        label->setText(QApplication::translate("Historial", "Historial de Cobros", 0));
        button_cerrar->setText(QApplication::translate("Historial", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class Historial: public Ui_Historial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORIAL_H
