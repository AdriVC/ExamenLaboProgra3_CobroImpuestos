#include "agregarProducto.h"
#include "ui_agregarProducto.h"

AgregarProducto::AgregarProducto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AgregarProducto)
{
    ui->setupUi(this);
}

AgregarProducto::~AgregarProducto()
{
    delete ui;
}
