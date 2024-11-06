#include "../include/Orden.hpp"
#include <iostream>

using namespace std;
Orden::Orden(string _codigo, Cliente* _cliente, Empleado* _empleado){
    codigo = _codigo;
    cliente = _cliente;
    empleado = _empleado;
}
   

string Orden::getCodigo() { 
    return codigo; 
}
Cliente* Orden::getCliente() { 
    return cliente; 
}
Empleado* Orden::getEmpleado() { 
    return empleado; 
}
void Orden::agregarDetalleArticulo(DetalleArticulo* articulo){ 
    detalleArticulos.push_back(articulo); 
}

void Orden::mostrarDetalleArticulos() {
    for (DetalleArticulo* detalleArticulo : detalleArticulos) {
        detalleArticulo->mostrar();
    }
}
double Orden::totalDetalleArticulos(){
    double suma = 0;
    for (DetalleArticulo* detalleArticulo : detalleArticulos) {
        suma += detalleArticulo->precioPorCantidad();
    }
    return suma;
}

void Orden::mostrar() {
    cout << "\n***************"<< " Productos Carnicos " <<"***************"<<endl<<endl;
    cout << "************* Codigo: " << codigo << " ************" << endl;
    cout << "Empleado:" << endl;
    empleado->mostrar();
    cout << "**************************************" <<endl;
    cout << "Cliente:" << endl;
    cliente->mostrar();
    cout << "**************************************" <<endl;
    cout << "Articulos:" << endl;
    mostrarDetalleArticulos();
    cout << "\n\n\t\tTotal a Pagar : " << totalDetalleArticulos() << endl;
}
