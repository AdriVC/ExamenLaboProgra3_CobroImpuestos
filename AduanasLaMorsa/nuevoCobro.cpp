#include "nuevoCobro.h"
#include "ui_nuevoCobro.h"
#include "Cliente.h"
#include "productos.h"
#include <vector>
#include <QStringListModel>
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

    ui->comboBox_productos->setEnabled(false);
    ui->button_efectuarCobro->setEnabled(false);

    QStringListModel *model = new QStringListModel(this);
    QStringList List;
    QString str;
    for(int i=0; i<clientes.size(); i++){
        Cliente* cliente = this->clientes[i];
        str = QString::fromStdString(this->clientes[i]->getNombre());
        List << str;
    }
    model->setStringList(List);
    ui->comboBox_clientes->setModel(model);
}

nuevoCobro::~nuevoCobro()
{
    delete ui;
}

int nuevoCobro::getNuevoCobro()const{
    int indice = -1;
    for(int i=0; i<productos.size(); i++){
        if(productos[i]->getNombre() == productos[ui->comboBox_productos->currentIndex()]->getNombre()){
            indice = i;
            break;
        }
    }
    return indice;
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

void nuevoCobro::on_comboBox_clientes_currentIndexChanged(int index)
{
    QStringListModel *model = new QStringListModel(this);
    QStringList List;
    QString str;
    for(int i=0; i<this->productos.size(); i++){
        if(this->productos[i]->getCliente()->getNombre() == ui->comboBox_clientes->currentText().toStdString()){
            str = QString::fromStdString(this->productos[i]->getNombre());
            List << str;
        }
    }
    model->setStringList(List);
    ui->comboBox_productos->setModel(model);
    ui->comboBox_productos->setEnabled(true);
}

void nuevoCobro::on_comboBox_productos_currentIndexChanged(int index)
{
    ui->button_efectuarCobro->setEnabled(true);
}
