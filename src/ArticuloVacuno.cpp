#include "../include/ArticuloVacuno.hpp"
#include <iostream>

ArticuloVacuno::ArticuloVacuno(string codigo, string nombre, double precio)
    : Articulo(codigo, nombre, precio) {}

void ArticuloVacuno::mostrar() {
    cout << "Art. Vacuno - ";
    Articulo::mostrar();
}
void ArticuloVacuno::guardar(ofstream& archivo) const {
    if (archivo.is_open()) {
        archivo << "Vacuno " << codigo << " " << nombre << " " << precio << endl;
    }
}

void ArticuloVacuno::cargar(ifstream& archivo) {
    if (archivo.is_open()) {
        archivo >> codigo >> nombre >> precio;
    }
}
