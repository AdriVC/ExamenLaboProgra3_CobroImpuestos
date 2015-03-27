#include "setTasas.h"
#include "ui_setTasas.h"
#include <QMessageBox>

setTasas::setTasas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setTasas)
{
    ui->setupUi(this);
    //background
    QPixmap bkgnd(":/Logo.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

}

setTasas::~setTasas()
{
    delete ui;
}

void setTasas::on_button_aceptar_clicked()
{
    if(ui->doubleSpinBox_educativos == 0.0 || ui->doubleSpinBox_alcoholicos == 0.0 || ui->doubleSpinBox_deLujo == 0.0){
        QMessageBox msgbox;
        msgbox.setWindowTitle("Error!");
        msgbox.setText("No puede tener tasas de 0.0");
        msgbox.exec();
    }else{
        this->close();
    }
}

double setTasas::getTasaEducativos()const{
    return ui->doubleSpinBox_educativos->value();
}
double setTasas::getTasaAlcoholicos()const{
    return ui->doubleSpinBox_alcoholicos->value();
}
double setTasas::getTasaLujo()const{
    return ui->doubleSpinBox_deLujo->value();
}

