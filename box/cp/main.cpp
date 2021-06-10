#include <iostream>
#include <string>

using namespace std;

void banner(int cantidad)
{
  cout << "Parkings Demo" << endl;
  cout << "####################" << endl;
  cout << "#    1. Ingresar   #" << endl;
  cout << "#    2. Ganancia   #" << endl;
  cout << "#    3. Consulta   #" << endl;
  cout << "#    4. Reporte    #" << endl;
  cout << "#    5. Salir      #" << endl;
  cout << "####################" << endl;

  cout << "> Digite su Opcion <" << endl;
  cout << "Cantidad de autos: " << cantidad << endl
       << endl;
}

int main()
{
  int cantidad{0};
  int option{0};
  banner(cantidad);

  // Selector
  cout << "> ";
  cin >> option;
}