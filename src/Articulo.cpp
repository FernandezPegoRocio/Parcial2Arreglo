#include "../include/Articulo.hpp"

Articulo::Articulo(string codigo, string nombre, double precio)
    : codigo(codigo), nombre(nombre), precio(precio) {}

string Articulo::obtenerCodigo() {
    return codigo;
}
string Articulo::obtenerNombre() {
    return nombre;
}
double Articulo::obtenerPrecio() {
    return precio;
}