#include "../include/DetalleArticulo.hpp"
#include <iostream>

using namespace std;

DetalleArticulo::DetalleArticulo(int _cantidad, Articulo* _articulo){
    cantidad = _cantidad;
    articulo = _articulo;
}
   

int DetalleArticulo::getCantidad() { 
    return cantidad; 
}
Articulo* DetalleArticulo::getArticulo() { 
    return articulo; 
}
double DetalleArticulo::precioPorCantidad() { 
    return (articulo->getPrecio())*cantidad; 
}
void DetalleArticulo::mostrar(){ 
    articulo->mostrar();
    cout << "Precio x "<< cantidad << " : " << precioPorCantidad() << endl;
}
