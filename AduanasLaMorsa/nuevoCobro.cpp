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

nuevoCobro::nuevoCobro(vector<Productos*>& productos, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nuevoCobro),
    cancelado(false),
    productos(productos),
    pos(0)
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
    return pos;
}

void nuevoCobro::on_button_cancelar_clicked()
{
    cancelado = true;
    this->close();
}

void nuevoCobro::on_button_efectuarCobro_clicked()
{
    pos = ui->comboBox_productos->currentIndex();
    cancelado = false;
    this->close();
}


void nuevoCobro::on_comboBox_productos_currentIndexChanged(int index)
{
    ui->button_efectuarCobro->setEnabled(true);
}
