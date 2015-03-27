#ifndef EDUCATIVOS_H
#define EDUCATIVOS_H
#include <string>
#include "Cliente.h"
#include "productos.h"

using std:: string;

class Educativos: public Productos{
	double tasa;
public:
    Educativos(string,double,double,double,Cliente*,double);
    double getTasa()const;
	string toString()const;
    virtual double CobrarImpuesto()const;
};
#endif
