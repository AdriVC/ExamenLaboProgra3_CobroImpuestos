//Ambar Suarez Adriana Vega Oscar Carranza
#ifndef PRODUCTOS_H
#define PRODUCTOS_H
#include <string>
#include <Cliente.h>

using std::string;

class Productos{
	string nombre;
	double volumen;
	double peso;
	double precio;
    Cliente* cliente;
public:
    Productos(string,double,double,double,Cliente*);
    virtual string toString()const = 0;
    virtual double CobrarImpuesto();
	double getVolumen()const;
	double getPeso()const;
	double getPrecio()const;
	Cliente* getCliente()const;
	string getNombre()const;
};
#endif
