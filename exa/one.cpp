#include <iostream>
#define ll long long

int main()
{
  ll n{0};
  std::cin >> n;

  while (n >= 2)
  {
    if (n % 2 == 0)
    {
      std::cout << n << " ";
      n = n / 2;
    }
    else if (n % 2 == 1)
    {
      std::cout << n << " ";
      n = (n * 3) + 1;
    }
  }
  std::cout << n;
}