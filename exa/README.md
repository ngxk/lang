### Comparation
#### append
```python
a = 10
b = []
for x in range(a):
  b.append(x)
print(b) # [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
```
```c++
#include <vector>
int main(){
  int n {0};
  cin>> n;
  vector<int> lista;
    for(int i=1; i<n+1; i++){
      lista.push_back(i)
    }
  cout<<lista[5]; //5
}
```