#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "Cliente.h"
#include "productos.h"
#include <string>
using std::string;
using std::vector;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_button_cobrarImpuesto_clicked();

    void on_button_historial_clicked();

    void on_button_agregarProducto_clicked();

    void on_button_agregarCliente_clicked();

private:
    Ui::MainWindow *ui;
    vector<Cliente*> clientes;
    vector<Productos*> productos;
    double tasas[3];
    string historial;
};

#endif // MAINWINDOW_H
