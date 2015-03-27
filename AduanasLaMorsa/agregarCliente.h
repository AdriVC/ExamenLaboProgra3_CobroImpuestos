#ifndef AGREGARCLIENTE_H
#define AGREGARCLIENTE_H

#include <QDialog>
#include "Cliente.h"

namespace Ui {
class AgregarCliente;
}

class AgregarCliente : public QDialog
{
    Q_OBJECT

public:
    explicit AgregarCliente(QWidget *parent = 0);
    ~AgregarCliente();
    Cliente* getNuevoCliente()const;

private slots:
    void on_button_agregar_clicked();

private:
    Ui::AgregarCliente *ui;
    Cliente* nuevo;
};

#endif // AGREGARCLIENTE_H
