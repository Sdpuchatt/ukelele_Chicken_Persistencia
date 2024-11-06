#include "../include/Cliente.hpp"
#include <iostream>
using namespace std;
Cliente::Cliente(string _codigo,string _nombre,string _direccion){
    codigo = _codigo;
    nombre = _nombre;
    direccion = _direccion;
}
 

string Cliente::getCodigo() { 
    return codigo; 
}
string Cliente::getNombre() {
     return nombre; 
}
string Cliente::getDireccion() { 
    return direccion; 
}
void Cliente::mostrar() {
    cout << "Codigo: " << codigo << "\nNombre: " << nombre << "\nDireccion: " << direccion << endl;
}
// Método para guardar los datos de Cliente en un archivo
void Cliente::guardar(ofstream& archivo) const {
    if (archivo.is_open()) {
        archivo << codigo << " " << nombre << " " << direccion << endl;
    }
}

// Método para cargar los datos de Cliente desde un archivo
void Cliente::cargar(ifstream& archivo) {
    if (archivo.is_open()) {
        archivo >> codigo >> nombre >> direccion;
    }
}