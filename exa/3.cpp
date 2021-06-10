#include <iostream>
#define ll long long
using namespace std;
int main(){
  ll n{0};
  cin >> n;
  while (n >= 2)
  {if (n % 2 == 0)
    {cout << n << " ";
      n = n / 2;
    }else if (n % 2 == 1){
      cout << n << " ";
      n = (n * 3) + 1;
    }}
  cout << n;
}
