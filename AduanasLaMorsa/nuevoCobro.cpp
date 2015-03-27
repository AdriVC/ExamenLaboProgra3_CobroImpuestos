#include "nuevoCobro.h"
#include "ui_nuevoCobro.h"
#include "Cliente.h"
#include "productos.h"
#include <vector>
#include <QStringListModel>
#include <iostream>
using std::cout;
using std::endl;
using std::vector;

nuevoCobro::nuevoCobro(vector<Cliente*>& clientes, vector<Productos*>& productos, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nuevoCobro),
    cancelado(false),
    productos(productos),
    clientes(clientes)
{
    ui->setupUi(this);
    //background
    QPixmap bkgnd(":/Logo.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    ui->button_efectuarCobro->setEnabled(false);

    QStringListModel *model = new QStringListModel(this);
    QStringList List;
    QString str;
    cout << "entro" << endl;
    for(int i=0; i<this->productos.size(); i++){
        str = QString::fromStdString(this->productos[i]->getNombre());
        List << str;
    }
    model->setStringList(List);
    ui->comboBox_productos->setModel(model);
}

nuevoCobro::~nuevoCobro()
{
    delete ui;
}

int nuevoCobro::getNuevoCobro()const{
    return ui->comboBox_productos->currentIndex();
}

void nuevoCobro::on_button_cancelar_clicked()
{
    cancelado = true;
    this->close();
}

void nuevoCobro::on_button_efectuarCobro_clicked()
{
    cancelado = false;
    this->close();
}


void nuevoCobro::on_comboBox_productos_currentIndexChanged(int index)
{
    ui->button_efectuarCobro->setEnabled(true);
}
