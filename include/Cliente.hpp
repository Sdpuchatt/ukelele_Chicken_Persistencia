#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <fstream>
#include <string>
using namespace std;
class Cliente {
private:
    string codigo;
    string nombre;
    string direccion;

public:
    Cliente(string codigo, string nombre, string direccion);
    string getCodigo();
    string getNombre();
    string getDireccion();
    void mostrar();
    
    void guardar(ofstream& archivo) const;
    void cargar(ifstream& archivo);
};

#endif