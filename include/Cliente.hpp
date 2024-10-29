#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using namespace std;

class Cliente {
private:
    string codigo;
    string nombre;
    string direccion;

public:
    Cliente(string codigo, string nombre, string direccion);
    string obtenerCodigo();
    string obtenerNombre();
    string obtenerDireccion();
};

#endif
