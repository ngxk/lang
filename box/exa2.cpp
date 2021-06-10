#include <iostream>
#include <string>

using namespace std;

class user
{
public:
  void name()
  {
    cout << "Julio";
  }
};

int main()
{
  user usuario;
  usuario.name();

  return 0;
}