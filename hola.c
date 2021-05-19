#include <stdio.h>

int main()
{
  int numero = 1; // type name = expression
  float val;
  int num = 123;
  int uno = 1, dos = 2, tres = 3;

  // types
  float foo = 23000.23;
  float more = 25000.23;
  val = foo + more;

  printf("HOLA\n");
  printf("%d %d %f    %.2f\n", numero, num, val, val);
  printf("%d %d %d", uno, dos, tres);

  return 0;
}