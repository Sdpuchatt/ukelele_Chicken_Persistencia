#include "../include/Articulo.hpp"
#include <iostream>
using namespace std;

Articulo::Articulo(string _codigo, string _nombre, double _precio){
    codigo = _codigo;
    nombre = _nombre;
    precio = _precio;
}

string Articulo::getCodigo(){ 
    return codigo; 
}
string Articulo::getNombre(){ 
    return nombre; 
}
double Articulo::getPrecio(){ 
    return precio; 
}

void Articulo::mostrar(){
    cout << "Cod: " << codigo << " Nombre: " << nombre << " --> Precio Unitario: " << precio << " ";
}

void Articulo::guardar(ofstream& archivo) const {
    archivo << "Articulo " << codigo << " " << nombre << " " << precio << endl;
}

void Articulo::cargar(ifstream& archivo) {
    archivo >> codigo >> nombre >> precio;
}