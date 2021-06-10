#include <iostream>
// #include <string>

using namespace std;

int suma(int one, int two, int detect)
{

  switch (detect)
  {
  case 1:
    return one + two;
    break;
  case 2:
    return one - two;
    break;
  case 3:
    return one * two;
    break;
  case 4:
    return one / two;
    break;
  }
  return 0;
}

int main()
{
  int n1, n2, r;

  cout << "1_ Sum\n2_ Res\n3_ Mul\n4_ Div" << endl;
  cin >> r;
  cout << "Ingresa los valores: " << endl;
  cin >> n1 >> n2;

  // Resultado
  cout << "Resultado: " << suma(n1, n2, r);
}