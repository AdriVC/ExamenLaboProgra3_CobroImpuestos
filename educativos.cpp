#include "productos.h"
#include "educativos.h"
#include "cliente.h"
#include <sring>
#include <sstream>

using std::string;

Educativos::Educativos(string nombre ,double volumen ,double peso,double precio,Cliente cliente ,double tasa):
Productos(nombre,volumen,peso,precio,cliente),tasa(tasa){

}

double Educativos::getTasa()const{
	return tasa;
}

string Educativos::toString()const{
	stringstream ss;
	ss<<" Producto Educativo: \n" << Productos::toString() << "\n\tTasa: "<<tasa;
	return ss.str();
}