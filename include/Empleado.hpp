#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>
#include <fstream>
using namespace std;
class Empleado {
private:
    string codigo;
    string nombre;
    string local;
    string puesto;

public:
    Empleado(string codigo, string nombre, string local, string puesto);
    string getCodigo();
    string getNombre();
    string getLocal();
    string getPuesto();
    void mostrar();

    void guardar(ofstream& archivoGuardar);
    void cargar(ifstream& archivoCargar);
};

#endif