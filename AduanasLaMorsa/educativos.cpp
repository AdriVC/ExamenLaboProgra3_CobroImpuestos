#include "productos.h"
#include "educativos.h"
#include "cliente.h"
#include <string>
#include <sstream>
using std::stringstream;
using std::string;

Educativos::Educativos(string nombre ,double volumen ,double peso,double precio,Cliente* cliente ,double tasa):
    Productos(nombre,volumen,peso,precio,cliente),tasa(tasa){

}

double Educativos::getTasa()const{
	return tasa;
}

string Educativos::toString()const{
	stringstream ss;
    ss << Productos::toString() << "\n\tProducto Educativos: Tasa = " << tasa;
	return ss.str();
}

double Educativos::CobrarImpuesto()const{
    return Productos::getVolumen()*tasa;
}
