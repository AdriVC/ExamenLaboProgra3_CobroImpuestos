#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "setTasas.h"
#include "agregarCliente.h"
#include "agregarProducto.h"
#include "historial.h"
#include "nuevoCobro.h"
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;
using std::stringstream;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
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
    this->tasas[0] = ventanaConfigTasas->getTasaEducativos();
    this->tasas[1] = ventanaConfigTasas->getTasaAlcoholicos();
    this->tasas[2]= ventanaConfigTasas->getTasaLujo();
    if(clientes.size() == 0){
        ui->button_agregarProducto->setEnabled(false);
    }else{
        ui->button_agregarProducto->setEnabled(true);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_button_cobrarImpuesto_clicked(){
    nuevoCobro* ventanaNuevoCobro = new nuevoCobro(clientes,productos,this);
    ventanaNuevoCobro->exec();
    cout << "salio" << endl;
    stringstream ss;
    ss << historial << "\n\n" << productos[ventanaNuevoCobro->getNuevoCobro()]->toString();
    historial = ss.str();
}

void MainWindow::on_button_historial_clicked(){
    Historial* ventanaHistorial = new Historial(historial,this);
    ventanaHistorial->exec();
}


void MainWindow::on_button_agregarProducto_clicked(){
    AgregarProducto* ventanaAgregarProducto = new AgregarProducto(clientes, tasas, this);
    ventanaAgregarProducto->exec();
    productos.push_back(ventanaAgregarProducto->getNuevoProducto());
}

void MainWindow::on_button_agregarCliente_clicked(){
    AgregarCliente* ventanaAgregarCliente = new AgregarCliente(this);
    ventanaAgregarCliente->exec();
    clientes.push_back(ventanaAgregarCliente->getNuevoCliente());
    if(clientes.size() == 0){
        ui->button_agregarProducto->setEnabled(false);
    }else{
        ui->button_agregarProducto->setEnabled(true);
    }
}
