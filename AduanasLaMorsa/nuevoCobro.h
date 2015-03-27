#ifndef NUEVOCOBRO_H
#define NUEVOCOBRO_H

#include <QDialog>

namespace Ui {
class nuevoCobro;
}

class nuevoCobro : public QDialog
{
    Q_OBJECT

public:
    explicit nuevoCobro(QWidget *parent = 0);
    ~nuevoCobro();

private:
    Ui::nuevoCobro *ui;
};

#endif // NUEVOCOBRO_H
