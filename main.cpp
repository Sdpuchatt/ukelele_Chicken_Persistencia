#include <iostream>
#include <fstream>
#include "include/Articulo.hpp"
#include "include/Cliente.hpp"
#include "include/Empleado.hpp"
#include "include/Orden.hpp"
#include "include/ArticuloCerdo.hpp"
#include "include/ArticuloPollo.hpp"
#include "include/ArticuloVacuno.hpp"

int main() {
    // Inicializar objetos
    Articulo* articulo1 = new ArticuloCerdo("CERDO01A", "Pechito de cerdo", 5500.00);
    Articulo* articulo2 = new ArticuloPollo("POLLO01A", "Milanesas Pollo", 8000.00);
    Articulo* articulo3 = new ArticuloVacuno("VACUNO01A", "Tira de asado", 6800.00);
    DetalleArticulo* detalleArticulo1 = new DetalleArticulo(3, articulo1);
    DetalleArticulo* detalleArticulo2 = new DetalleArticulo(4, articulo2);
    DetalleArticulo* detalleArticulo3 = new DetalleArticulo(5, articulo3);

    Cliente* cliente = new Cliente("001C", "Juan Perez", "Belgica 7119");
    Empleado* empleado = new Empleado("001V", "Sergio", "Av Siempre Viva 123", "Vendedor");

    Orden* orden = new Orden("001", cliente, empleado);
    orden->agregarDetalleArticulo(detalleArticulo1);
    orden->agregarDetalleArticulo(detalleArticulo2);
    orden->agregarDetalleArticulo(detalleArticulo3);

    orden->mostrar();

    // Crear otra orden
    Orden* orden2 = new Orden("002", cliente, empleado);
    DetalleArticulo* detalleArticulo4 = new DetalleArticulo(1, articulo1);
    DetalleArticulo* detalleArticulo5 = new DetalleArticulo(2, articulo2);
    orden2->agregarDetalleArticulo(detalleArticulo4);
    orden2->agregarDetalleArticulo(detalleArticulo5);

    orden2->mostrar();

    // Guardar cliente en archivo
    Cliente client("001", "Juan Perez", "Calle Falsa 123");
    ofstream archivoGuardarCliente("clientes.txt");
    client.guardar(archivoGuardarCliente);
    archivoGuardarCliente.close();

    // Cargar cliente desde archivo
    ifstream archivoCargarCliente("clientes.txt");
    Cliente clienteCargado("", "", "");
    clienteCargado.cargar(archivoCargarCliente);
    archivoCargarCliente.close();
    clienteCargado.mostrar();

    // Guardar artículos en archivo
    ofstream archivoGuardarArticulos("articulos.txt");
    if (archivoGuardarArticulos.is_open()) {
        ArticuloCerdo cerdo("001", "Costillas", 120.5);
        ArticuloPollo pollo("002", "Pechuga", 95.0);
        ArticuloVacuno vacuno("003", "Lomo", 150.75);

        cerdo.guardar(archivoGuardarArticulos);
        pollo.guardar(archivoGuardarArticulos);
        vacuno.guardar(archivoGuardarArticulos);

        archivoGuardarArticulos.close();
    }

    // Cargar artículos desde archivo
    ifstream archivoCargarArticulos("articulos.txt");
    string tipo;
    if (archivoCargarArticulos.is_open()) {
        while (archivoCargarArticulos >> tipo) {
            if (tipo == "Cerdo") {
                ArticuloCerdo cerdo("", "", 0);
                cerdo.cargar(archivoCargarArticulos);
                cerdo.mostrar();
            } else if (tipo == "Pollo") {
                ArticuloPollo pollo("", "", 0);
                pollo.cargar(archivoCargarArticulos);
                pollo.mostrar();
            } else if (tipo == "Vacuno") {
                ArticuloVacuno vacuno("", "", 0);
                vacuno.cargar(archivoCargarArticulos);
                vacuno.mostrar();
            }
        }
        archivoCargarArticulos.close();
    }

    ofstream archivoGuardar("empleados.txt");
    empleado->guardar(archivoGuardar);
    archivoGuardar.close();

    // Cargar empleado desde el archivo
    ifstream archivoCargar("empleados.txt");
    Empleado empleadoCargado("", "", "", "");
    empleadoCargado.cargar(archivoCargar);
    archivoCargar.close();

    // Mostrar el empleado cargado
    empleadoCargado.mostrar();



    // Liberar memoria
    delete detalleArticulo1;
    delete detalleArticulo2;
    delete detalleArticulo3;
    delete detalleArticulo4;
    delete detalleArticulo5;
    delete articulo1;
    delete articulo2;
    delete articulo3;
    delete cliente;
    delete empleado;
    delete orden;
    delete orden2;

    return 0;
}
