//Oscar Carranza     Ambar Suarez    Adriana Vega
#ifndef PRODS_ALCOHOLICOS_H
#define PRODS_ALCOHOLICOS_H
#include "producto.h"
#include "Cliente.h"
#include <string>
using std::string;

class Prods_alcohoicos:public Productos{
	double tasa;
public:
	Prods_alcohoicos(string,double,double,double,Cliente,double);
	double getTasa()const;
	string toString()const;
};
#endif