#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>
#include "Cliente.hpp"
#include "Articulo.hpp"
using namespace std;

class Pedido {
private:
    string codigo;
    Cliente* cliente;
    Articulo** listaArticulos; 
    int maxArticulos;          
    int contadorArticulos;     

public:
    Pedido(string codigo, Cliente* cliente, int maxArticulos); 
    void agregarArticulo(Articulo* articulo);
    void mostrar();
    ~Pedido();
};

#endif
