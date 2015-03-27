#include "agregarCliente.h"
#include "ui_agregarCliente.h"
#include "Cliente.h"
#include <QMessageBox>

AgregarCliente::AgregarCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AgregarCliente)
{
    ui->setupUi(this);
    //background
    QPixmap bkgnd(":/Logo.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

AgregarCliente::~AgregarCliente()
{
    delete ui;
}

Cliente* AgregarCliente::getNuevoCliente()const{
    return nuevo;
}



void AgregarCliente::on_button_agregar_clicked()
{
    if(ui->lineEdit_nombre->text().isEmpty()){
        QMessageBox msgbox;
        msgbox.setWindowTitle("Error");
        msgbox.setText("Favor llene todos los campos");
        msgbox.exec();
    }else{
        nuevo = new Cliente(ui->lineEdit_nombre->text().toStdString());
        this->close();
    }
}
