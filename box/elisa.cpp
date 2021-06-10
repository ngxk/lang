#include <iostream>

using namespace std;

class operaciones
{
  int primero{0}; // Argumentos
  int segundo{0};
  int resultado;

public:
  void sumar()
  { // Funciones = Metodos
    resultado = primero + segundo;
  }
  void restar()
  { // Funciones = Metodos
    resultado = primero - segundo;
  }
  operaciones(int, int);
};

operaciones::operaciones(int dato1, int dato2)
{ // Funciones de recepcion
  primero = dato1;
  segundo = dato2;
}

int main()
{
  operaciones objeto1(30, 10);
  objeto1.sumar();
  return 0;
}