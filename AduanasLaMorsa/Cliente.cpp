//Oscar Carranza     Ambar Suarez    Adriana Vega
#include "Cliente.h"
#include <string>

using std::string;

	Cliente::Cliente(string nombre):nombre(nombre){

	}

    string Cliente::getNombre()const{
        return nombre;
	}

