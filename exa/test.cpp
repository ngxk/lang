#include <iostream>
#include <vector>

#define ll long long
using namespace std;

int main()
{
  int n{0};
  cin>>n;
  vector<int> lista;
  for(int i=1; i<n+1; i++){
    lista.push_back(i);
  }
  cout << lista[5-1];
  
}