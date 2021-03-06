//Ambar Suarez  Adriana Vega  Oscar Carranza
#include "productos.h"
#include "Cliente.h"
#include <sstream>
#include <string>
using std::stringstream;
using std::string;
using std::endl;

Productos::Productos(string nombre, double volumen ,double peso ,double precio,Cliente* cliente){
	this->nombre=nombre;
	this->volumen=volumen;
	this->peso=peso;
	this->precio=precio;
	this->cliente=cliente;
}

string Productos::toString()const{
	stringstream ss;
    ss<<"Nombre: "<< nombre << "\n\t Volumen: "<<volumen<<"\n\t Peso: "<<peso <<"\n\t Precio: "
            <<precio <<"\n\t Cliente: "<<cliente->getNombre();
    return ss.str();
}

double Productos::CobrarImpuesto(){
    return 0.0;
}

double Productos::getVolumen()const{
	return volumen;
}
double Productos::getPeso()const{
	return peso;
}

double Productos::getPrecio()const{
	return peso;
}

Cliente* Productos::getCliente()const{
	return cliente;
}

string Productos::getNombre()const{
	return nombre;
}
