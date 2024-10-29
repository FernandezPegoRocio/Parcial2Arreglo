#include "../include/Cliente.hpp"

Cliente::Cliente(string codigo, string nombre, string direccion)
    : codigo(codigo), nombre(nombre), direccion(direccion) {}

string Cliente::obtenerCodigo() {
    return codigo;
}

string Cliente::obtenerNombre() {
    return nombre;
}

string Cliente::obtenerDireccion() {
    return direccion;
}