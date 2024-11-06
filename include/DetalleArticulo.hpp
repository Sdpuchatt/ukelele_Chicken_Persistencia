#ifndef DETALLEARTICULO_HPP
#define DETALLEARTICULO_HPP

#include <string>
#include <list>
#include <fstream>
#include "Articulo.hpp"
using namespace std;

class DetalleArticulo{
    private:
        int cantidad;
        Articulo* articulo;
        double precioTotal;

    public:
        DetalleArticulo(int _cantidad, Articulo* _articulo);
        int getCantidad();
        Articulo* getArticulo();
        double precioPorCantidad();
        void mostrar();

};


#endif