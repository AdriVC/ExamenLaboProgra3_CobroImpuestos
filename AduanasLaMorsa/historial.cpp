#include "historial.h"
#include "ui_historial.h"
#include <string>
using std::string;

Historial::Historial(string historial, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Historial)
{
    ui->setupUi(this);
    //background
    QPixmap bkgnd(":/Logo.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    ui->textEdit_historial->append(historial.c_str());
}

Historial::~Historial()
{
    delete ui;
}

void Historial::on_button_cerrar_clicked()
{
    this->close();
}
