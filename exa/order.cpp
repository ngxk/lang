#include <iostream>

using namespace std;

int main(){
  int lista[]{2,5,3,1,4};
  int i,j,aux;

  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      if(lista[j] > lista[j+1]){
        aux=lista[j];
        lista[j]= lista[j+1];
        lista[j+1]=aux;
      }
    }
  }

  for(int y=0; y<5;y++){
    cout<<lista[y];
  }
}

