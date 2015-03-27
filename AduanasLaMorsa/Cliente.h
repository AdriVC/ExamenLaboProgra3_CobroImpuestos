//Oscar Carranza     Ambar Suarez    Adriana Vega
#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>

using std::string;

class Cliente{
	string nombre;
public:
	Cliente(string);
    string getNombre()const;
};
#endif
