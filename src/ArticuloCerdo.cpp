#include "../include/ArticuloCerdo.hpp"
#include <iostream>
using namespace std;


ArticuloCerdo::ArticuloCerdo(string codigo,string nombre,double precio)
: Articulo(codigo, nombre, precio) {}

void ArticuloCerdo::mostrar() {
    cout << "Art. Cerdo - ";
    Articulo::mostrar();
}

void ArticuloCerdo::guardar(ofstream& archivo) const {
    if (archivo.is_open()) {
        archivo << "Cerdo " << codigo << " " << nombre << " " << precio << endl;
    }
}

// Implementación del método de cargar
void ArticuloCerdo::cargar(ifstream& archivo) {
    if (archivo.is_open()) {
        archivo >> codigo >> nombre >> precio;
    }
}
