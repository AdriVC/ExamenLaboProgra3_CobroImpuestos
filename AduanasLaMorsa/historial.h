#ifndef HISTORIAL_H
#define HISTORIAL_H

#include <QDialog>

namespace Ui {
class Historial;
}

class Historial : public QDialog
{
    Q_OBJECT

public:
    explicit Historial(QWidget *parent = 0);
    ~Historial();

private:
    Ui::Historial *ui;
};

#endif // HISTORIAL_H
