#include <iostream>
#include <string>

using namespace std;

class name
{
public:
  int age;
  string name;
};

int main()
{
  name obj;

  obj.age = 15;
  obj.name = "julio";

  cout << obj.age << obj.name << endl;

  return 0;
}