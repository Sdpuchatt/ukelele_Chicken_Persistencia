@echo off
g++ -c src/Articulo.cpp -o Articulo.o
g++ -c src/Cliente.cpp -o Cliente.o
g++ -c src/Empleado.cpp -o Empleado.o
g++ -c src/Orden.cpp -o Orden.o
g++ -c src/DetalleArticulo.cpp -o DetalleArticulo.o
g++ -c src/ArticuloCerdo.cpp -o ArticuloCerdo.o
g++ -c src/ArticuloPollo.cpp -o ArticuloPollo.o
g++ -c src/ArticuloVacuno.cpp -o ArticuloVacuno.o
g++ -c main.cpp -o main.o
g++ Articulo.o Cliente.o Empleado.o Orden.o main.o DetalleArticulo.o ArticuloCerdo.o ArticuloPollo.o ArticuloVacuno.o -o app.exe
echo Compilacion completa.
rem Ejecutar el programa
app.exe

rem Eliminar archivos .o generados
DEL *.o
