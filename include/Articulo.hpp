#ifndef ARTICULO_HPP
#define ARTICULO_HPP

#include <fstream>
#include <string>
using namespace std;
class Articulo {
protected:
    string codigo;
    string nombre;
    double precio;

public:
    Articulo(string codigo, string nombre, double precio);
    string getCodigo();
    string getNombre();
    double getPrecio();
    virtual void mostrar();

    virtual void guardar(ofstream& archivo) const;
    virtual void cargar(ifstream& archivo);
};

#endif