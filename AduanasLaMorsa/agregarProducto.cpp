#include "agregarProducto.h"
#include "ui_agregarProducto.h"
#include <QMessageBox>

AgregarProducto::AgregarProducto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AgregarProducto)
{
    ui->setupUi(this);
    //background
    QPixmap bkgnd(":/Logo.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

AgregarProducto::~AgregarProducto()
{
    delete ui;
}

Producto* AgregarProducto::getNuevoProducto()const{
    return nuevo;
}




void AgregarProducto::on_button_agregar_clicked()
{
    if(ui->lineEdit_nombre == "" || ui->comboBox_clientes->currentIndex() == -1 ||
            ui->comboBox_tipoProductos == -1  || ui->doubleSpinBox_volumen->value() == 0.0 ||
            ui->doubleSpinBox_precio->value() == 0.0 || ui->doubleSpinBox_peso->value() == 0.0){
        QMessageBox msgbox;
        msgbox.setWindowTitle("Error");
        msgbox.setText("Favor llene todos los campos");
        msgbox.exec();
    }else{
        nuevo = new Producto();
    }
}
