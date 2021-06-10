#include <iostream>

using namespace std;

class operation
{
public:
  int val1{0};
  int val2{0};
  int resultado{0};

  int suma()
  {
    return val1 + val2;
  }

  operation(int, int);
};

// Constructor
operation::operation(int date1, int date2)
{
  val1 = date1;
  val2 = date2;
}

int main()
{
  int n1, n2;
  cout << "Ingresa los valores: " << endl;
  cin >> n1 >> n2;

  operation objeto(n1, n2);
  // objeto.suma();

  cout << objeto.resultado << endl;

  return 0;
}