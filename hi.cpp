#include <iostream>

using namespace std;

int main()
{
  int numero = 1; // type name = expression
  float val;
  int num = 123;
  int uno = 1, dos = 2, tres = 3;

  float foo = 23000.33333333;
  float more = 25000.22222222;

  val = foo + more;

  cout << "HI" << endl;
  cout << numero << num << endl;

  cout << val << endl;
  printf("%d %d   %.2f\n", numero, num, val);

  cout << uno << dos << tres + "   fs" << val << endl;

  return 0;
}