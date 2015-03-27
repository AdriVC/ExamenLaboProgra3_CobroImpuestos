#include "agregarProducto.h"
#include "ui_agregarProducto.h"
#include "Prods_alcoholicos.h"
#include "educativos.h"
#include "Prods_lujo.h"
#include <QMessageBox>
#include "productos.h"
#include <QStringListModel>
#include <iostream>
using std::cout;
using std::endl;

AgregarProducto::AgregarProducto(vector<Cliente*> clientes, double* tasas, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AgregarProducto),
    productos(productos),
    clientes(clientes),
    tasas(tasas)
{
    ui->setupUi(this);
    //background
    QPixmap bkgnd(":/Logo.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    QStringListModel *model = new QStringListModel(this);
    QStringList List;
    QString str;
    for(int i=0; i<this->clientes.size(); i++){
        str = QString::fromStdString(this->clientes[i]->getNombre());
        List << str;
    }
    model->setStringList(List);
    ui->comboBox_clientes->setModel(model);
}

AgregarProducto::~AgregarProducto()
{
    delete ui;
}

Productos* AgregarProducto::getNuevoProducto()const{
    return nuevo;
}

void AgregarProducto::on_button_agregar_clicked()
{
    if(ui->lineEdit_nombre->text().isEmpty() || ui->comboBox_clientes->currentIndex() == -1 ||
            ui->comboBox_tipoProductos->currentIndex() == -1  || ui->doubleSpinBox_volumen->value() == 0.0 ||
            ui->doubleSpinBox_precio->value() == 0.0 || ui->doubleSpinBox_peso->value() == 0.0){
        QMessageBox msgbox;
        msgbox.setWindowTitle("Error");
        msgbox.setText("Favor llene todos los campos");
        msgbox.exec();
    }else{
        if(ui->comboBox_tipoProductos->currentIndex() == 0){
            nuevo = new Educativos(ui->lineEdit_nombre->text().toStdString(),ui->doubleSpinBox_volumen->value(),
                                   ui->doubleSpinBox_peso->value(),ui->doubleSpinBox_precio->value(),
                                   clientes[ui->comboBox_clientes->currentIndex()], tasas[0]);
        }else if(ui->comboBox_tipoProductos->currentIndex() == 1){
            nuevo = new Prods_alcoholicos(ui->lineEdit_nombre->text().toStdString(),ui->doubleSpinBox_volumen->value(),
                                   ui->doubleSpinBox_peso->value(),ui->doubleSpinBox_precio->value(),
                                   clientes[ui->comboBox_clientes->currentIndex()], tasas[1]);
        }else{
            nuevo = new Prods_lujo(ui->lineEdit_nombre->text().toStdString(),ui->doubleSpinBox_volumen->value(),
                                   ui->doubleSpinBox_peso->value(),ui->doubleSpinBox_precio->value(),
                                   clientes[ui->comboBox_clientes->currentIndex()], tasas[2]);
        }
    }
}
