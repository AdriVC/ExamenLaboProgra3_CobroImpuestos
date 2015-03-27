//Oscar Carranza     Ambar Suarez    Adriana Vega
#ifndef PRODS_LUJO_H
#define PRODS_LUJO_H
#include "productos.h"
#include "Cliente.h"
#include <string>

using std::string;

class Prods_lujo:public Productos{
	double tasa;
public:
    Prods_lujo(string,double,double,double,Cliente*,double);
	double getTasa()const;
    virtual string toString()const;
    virtual double CobrarImpuesto()const;
};
#endif
