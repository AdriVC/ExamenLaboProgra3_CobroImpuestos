#include "agregarCliente.h"
#include "ui_agregarCliente.h"

AgregarCliente::AgregarCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AgregarCliente)
{
    ui->setupUi(this);
}

AgregarCliente::~AgregarCliente()
{
    delete ui;
}
