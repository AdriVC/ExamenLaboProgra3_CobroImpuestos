#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "setTasas.h"
#include "agregarCliente.h"
#include "agregarProducto.h"
#include "historial.h"
#include "nuevoCobro.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    tasaEducativos(0.0),
    tasaAlcoholicos(0.0),
    tasaLujo(0.0),
    historial("")
{
    ui->setupUi(this);
    //background
    QPixmap bkgnd(":/Logo.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    setTasas* ventanaConfigTasas = new setTasas(this);
    ventanaConfigTasas->exec();
    tasaEducativos = ventanaConfigTasas->getTasaEducativos();
    tasaAlcoholicos = ventanaConfigTasas->getTasaAlcoholicos();
    tasaLujo = ventanaConfigTasas->getTasaLujo();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_button_cobrarImpuesto_clicked(){
    nuevoCobro* ventanaNuevoCobro = new nuevoCobro(this);
    ventanaNuevoCobro->exec();
    stringstream ss;
    ss << historial << "\n\n" << productos[ventanaNuevoCobro->getNuevoCobro()]->toString();
    historial = ss.str();
}

void MainWindow::on_button_historial_clicked(){
    Historial* ventanaHistorial = new Historial(this,historial);
    ventanaHistorial->exec();
}


void MainWindow::on_button_agregarProducto_clicked(){
    AgregarProducto* ventanaAgregarProducto = new AgregarProducto(this);
    ventanaAgregarProducto->exec();
}

void MainWindow::on_button_agregarCliente_clicked(){
    AgregarCliente* ventanaAgregarCliente = new AgregarCliente(this);
    ventanaAgregarCliente->exec();
}
