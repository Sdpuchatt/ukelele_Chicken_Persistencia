#ifndef ARTICULO_POLLO_HPP
#define ARTICULO_POLLO_HPP

#include "Articulo.hpp"
#include <fstream>

class ArticuloPollo : public Articulo {
public:
    ArticuloPollo(string codigo, string nombre, double precio);
    void mostrar() override; // Sobrecarga del método mostrar
    void guardar(ofstream& archivo) const override;
    void cargar(ifstream& archivo) override;
};


#endif