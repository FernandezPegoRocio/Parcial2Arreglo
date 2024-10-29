#include "../include/Pedido.hpp"
#include <iostream>
using namespace std;

Pedido::Pedido(string codigo, Cliente* cliente, int maxArticulos)
    : codigo(codigo), cliente(cliente), maxArticulos(maxArticulos), contadorArticulos(0) {
    listaArticulos = new Articulo*[maxArticulos]; 
}

void Pedido::agregarArticulo(Articulo* articulo) {
    if (contadorArticulos < maxArticulos) {
        listaArticulos[contadorArticulos] = articulo; 
        contadorArticulos++;
    } else {
        cout << "No se pueden agregar más artículos, se ha alcanzado el límite." << endl;
    }
}

void Pedido::mostrar() {
    cout << "Cliente: " << cliente->obtenerNombre() << endl;
    for (int i = 0; i < contadorArticulos; i++) {
        cout << "Código del Artículo: " << listaArticulos[i]->obtenerCodigo() << endl;
        cout << "Nombre del Artículo: " << listaArticulos[i]->obtenerNombre() << endl;
        cout << endl;
    }
}

Pedido::~Pedido() {
    delete[] listaArticulos; 
}
