#ifndef SETTASAS_H
#define SETTASAS_H

#include <QDialog>

namespace Ui {
class setTasas;
}

class setTasas : public QDialog
{
    Q_OBJECT

public:
    explicit setTasas(QWidget *parent = 0);
    ~setTasas();
    double getTasaEducativos()const;
    double getTasaAlcoholicos()const;
    double getTasaLujo()const;

private:
    Ui::setTasas *ui;
};

#endif // SETTASAS_H
