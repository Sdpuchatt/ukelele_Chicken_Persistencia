#ifndef ORDEN_HPP
#define ORDEN_HPP

#include <string>
#include <list>
#include "Cliente.hpp"
#include "Empleado.hpp"
#include "Articulo.hpp"
#include "DetalleArticulo.hpp"

using namespace std;
class Orden {
private:
    string codigo;
    Cliente* cliente;
    Empleado* empleado;
    list<DetalleArticulo*> detalleArticulos;

public:
    Orden(string codigo, Cliente* cliente, Empleado* empleado);
    string getCodigo();
    Cliente* getCliente();
    Empleado* getEmpleado();
    void mostrar();
    void agregarDetalleArticulo(DetalleArticulo* detalleArticulo);
    void mostrarDetalleArticulos();
    double totalDetalleArticulos();


};

#endif
