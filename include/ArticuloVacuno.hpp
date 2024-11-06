#ifndef ARTICULO_VACUNO_HPP
#define ARTICULO_VACUNO_HPP

#include "Articulo.hpp"
#include <fstream>

class ArticuloVacuno : public Articulo {
public:
    ArticuloVacuno(string codigo, string nombre, double precio);
    void mostrar() override;
    void guardar(ofstream& archivo) const override;
    void cargar(ifstream& archivo) override;
};

#endif