#ifndef NUEVOCOBRO_H
#define NUEVOCOBRO_H

#include <QDialog>
#include <vector>
#include "Cliente.h"
#include "productos.h"
using std::vector;

namespace Ui {
class nuevoCobro;
}

class nuevoCobro : public QDialog
{
    Q_OBJECT

public:
    explicit nuevoCobro(vector<Productos*>&, QWidget *parent = 0);
    ~nuevoCobro();
    int getNuevoCobro()const;

private slots:
    void on_button_cancelar_clicked();

    void on_button_efectuarCobro_clicked();

    void on_comboBox_productos_currentIndexChanged(int index);

private:
    Ui::nuevoCobro *ui;
    bool cancelado;
    vector<Productos*> productos;
    int pos;
};

#endif // NUEVOCOBRO_H
