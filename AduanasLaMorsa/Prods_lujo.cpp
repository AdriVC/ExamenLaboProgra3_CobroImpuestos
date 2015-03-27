//Oscar Carranza     Ambar Suarez    Adriana Vega
#include "Prods_lujo.h"
#include "productos.h"
#include "Cliente.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

    Prods_lujo::Prods_lujo(string nombre,double volumen,double peso,double precio,Cliente* cliente,double tasa):
	Productos(nombre,volumen,peso,precio,cliente),tasa(tasa){

	}

	double Prods_lujo::getTasa()const{
		return tasa;
	}

	string Prods_lujo::toString()const{
		stringstream ss;
		ss << "Producto de Lujo: \n" << Productos::toString() << "\n\tTasa: " << tasa;
        return ss.str();
	}

    double Prods_lujo::CobrarImpuesto()const{
        return (Productos::getPeso()+Productos::getVolumen())*tasa;
    }

