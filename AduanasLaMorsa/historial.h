#ifndef HISTORIAL_H
#define HISTORIAL_H

#include <QDialog>
#include <string>
using std::string;

namespace Ui {
class Historial;
}

class Historial : public QDialog
{
    Q_OBJECT

public:
    explicit Historial(string, QWidget *parent = 0);
    ~Historial();

private slots:
    void on_button_cerrar_clicked();

private:
    Ui::Historial *ui;
};

#endif // HISTORIAL_H
