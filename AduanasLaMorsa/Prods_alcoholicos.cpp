//Oscar Carranza     Ambar Suarez    Adriana Vega
#include "Prods_alcoholicos.h"
#include "productos.h"
#include "Cliente.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Prods_alcoholicos::Prods_alcoholicos(string nombre,double volumen,double peso,double precio,Cliente* cliente,double tasa):
        Productos(nombre,volumen,peso,precio,cliente),tasa(tasa){
}

double Prods_alcoholicos::getTasa()const{
        return tasa;
}

string Prods_alcoholicos::toString()const{
		stringstream ss;
		ss << "Producto Alcohólico: \n" << Productos::toString() << "\n\tTasa: " << tasa;
        return ss.str();
	}

double Prods_alcoholicos::CobrarImpuesto()const{
    return (peso+volumen)*tasa;
}

