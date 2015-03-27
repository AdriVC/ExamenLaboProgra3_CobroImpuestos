#ifndef AGREGARPRODUCTO_H
#define AGREGARPRODUCTO_H

#include <QDialog>
#include "productos.h"
#include "Cliente.h"
#include <vector>
using std::vector;

namespace Ui {
class AgregarProducto;
}

class AgregarProducto : public QDialog
{
    Q_OBJECT

public:
    explicit AgregarProducto(vector<Cliente*>, double* tasas, QWidget *parent = 0);
    ~AgregarProducto();
    Productos* getNuevoProducto()const;

private slots:
    void on_button_agregar_clicked();

private:
    Ui::AgregarProducto *ui;
    Productos* nuevo;
    vector<Cliente*> clientes;
    double* tasas;
};

#endif // AGREGARPRODUCTO_H
