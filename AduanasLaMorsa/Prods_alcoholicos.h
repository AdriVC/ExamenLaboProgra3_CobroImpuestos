//Oscar Carranza     Ambar Suarez    Adriana Vega
#ifndef PRODS_ALCOHOLICOS_H
#define PRODS_ALCOHOLICOS_H
#include "productos.h"
#include "Cliente.h"
#include <string>
using std::string;

class Prods_alcoholicos:public Productos{
	double tasa;
public:
    Prods_alcoholicos(string,double,double,double,Cliente*,double);
	double getTasa()const;
	string toString()const;
};
#endif
