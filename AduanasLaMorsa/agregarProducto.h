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

private:
    Ui::AgregarProducto *ui;
};

#endif // AGREGARPRODUCTO_H
