#include "../include/ArticuloPollo.hpp"
#include <iostream>
using namespace std;

ArticuloPollo::ArticuloPollo(string codigo, string nombre, double precio)
    : Articulo(codigo, nombre, precio) {}

void ArticuloPollo::mostrar() {
    cout << "Art. Pollo - ";
    Articulo::mostrar();
}
void ArticuloPollo::guardar(ofstream& archivo) const {
    if (archivo.is_open()) {
        archivo << "Pollo " << codigo << " " << nombre << " " << precio << endl;
    }
}

void ArticuloPollo::cargar(ifstream& archivo) {
    if (archivo.is_open()) {
        archivo >> codigo >> nombre >> precio;
    }
}