#ifndef ARTICULO_CERDO_HPP
#define ARTICULO_CERDO_HPP

#include "Articulo.hpp"
#include <fstream>

class ArticuloCerdo : public Articulo {
public:
    ArticuloCerdo(string codigo, string nombre, double precio);
    void mostrar() override;
    void guardar(ofstream& archivo) const override;
    void cargar(ifstream& archivo) override;
};

#endif
