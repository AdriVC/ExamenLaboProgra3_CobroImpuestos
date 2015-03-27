#ifndef AGREGARPRODUCTO_H
#define AGREGARPRODUCTO_H

#include <QDialog>

namespace Ui {
class AgregarProducto;
}

class AgregarProducto : public QDialog
{
    Q_OBJECT

public:
    explicit AgregarProducto(QWidget *parent = 0);
    ~AgregarProducto();
    Producto* getNuevoProducto()const;

private:
    Ui::AgregarProducto *ui;
    Producto* nuevo;
};

#endif // AGREGARPRODUCTO_H
