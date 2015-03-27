/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *lable_subtitulo;
    QLabel *lable_titulo;
    QLabel *lable_por;
    QPushButton *button_cobrarImpuesto;
    QPushButton *button_historial;
    QPushButton *button_agregarCliente;
    QPushButton *button_agregarProducto;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(535, 469);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lable_subtitulo = new QLabel(centralWidget);
        lable_subtitulo->setObjectName(QStringLiteral("lable_subtitulo"));
        lable_subtitulo->setGeometry(QRect(100, 20, 191, 21));
        QFont font;
        font.setFamily(QStringLiteral("Cooper Black"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        lable_subtitulo->setFont(font);
        lable_titulo = new QLabel(centralWidget);
        lable_titulo->setObjectName(QStringLiteral("lable_titulo"));
        lable_titulo->setGeometry(QRect(140, 40, 281, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Cooper Black"));
        font1.setPointSize(48);
        font1.setBold(true);
        font1.setWeight(75);
        lable_titulo->setFont(font1);
        lable_por = new QLabel(centralWidget);
        lable_por->setObjectName(QStringLiteral("lable_por"));
        lable_por->setGeometry(QRect(10, 390, 321, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("Cooper Black"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        lable_por->setFont(font2);
        button_cobrarImpuesto = new QPushButton(centralWidget);
        button_cobrarImpuesto->setObjectName(QStringLiteral("button_cobrarImpuesto"));
        button_cobrarImpuesto->setGeometry(QRect(10, 220, 211, 51));
        QFont font3;
        font3.setFamily(QStringLiteral("Cooper Black"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        button_cobrarImpuesto->setFont(font3);
        button_historial = new QPushButton(centralWidget);
        button_historial->setObjectName(QStringLiteral("button_historial"));
        button_historial->setGeometry(QRect(10, 270, 211, 51));
        button_historial->setFont(font3);
        button_agregarCliente = new QPushButton(centralWidget);
        button_agregarCliente->setObjectName(QStringLiteral("button_agregarCliente"));
        button_agregarCliente->setGeometry(QRect(10, 170, 211, 51));
        button_agregarCliente->setFont(font3);
        button_agregarProducto = new QPushButton(centralWidget);
        button_agregarProducto->setObjectName(QStringLiteral("button_agregarProducto"));
        button_agregarProducto->setGeometry(QRect(10, 120, 211, 51));
        button_agregarProducto->setFont(font3);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 535, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        lable_subtitulo->setText(QApplication::translate("MainWindow", "Compa\303\261ia Aduanera", 0));
        lable_titulo->setText(QApplication::translate("MainWindow", "LA MORSA", 0));
        lable_por->setText(QApplication::translate("MainWindow", "Por: Adriana Vega, Ambar Suarez, Oscar Carranza", 0));
        button_cobrarImpuesto->setText(QApplication::translate("MainWindow", "Cobrar Impuesto", 0));
        button_historial->setText(QApplication::translate("MainWindow", "Historial de Cobros", 0));
        button_agregarCliente->setText(QApplication::translate("MainWindow", "Agregar Cliente", 0));
        button_agregarProducto->setText(QApplication::translate("MainWindow", "Agregar Producto", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
