#include "nuevoCobro.h"
#include "ui_nuevoCobro.h"

nuevoCobro::nuevoCobro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nuevoCobro),
    cancleado(false);
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
}

nuevoCobro::~nuevoCobro()
{
    delete ui;
}

void nuevoCobro::on_button_efectuarCobro_2_clicked()
{
    cancelado = true;
    this->close();
}

void nuevoCobro::on_button_efectuarCobro_clicked()
{
    cancelado = false;
    this->close();
}
