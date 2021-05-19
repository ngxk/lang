# Programming

## Compilators
### Go-lang
> go run hello.go

### C
> gcc hola.c -o hola

### C++
> g++ hi.cpp -o hi

### Rust-lang
> rustc pizza.rs

> cargo run

## Hello World!
### Go-lang
```go
package main
import 'fmt'

func main(){
  fmt.Print("HELLO")
  fmt.Printf("HELLO")
}
```
### C
```c
#import <stdio.h>

int main(){
  printf("HOLA");
  return 0;
}
```
### C++
```c
#import <iostream>
using namespace std;

int main(){
  cout << HI << endl;
  printf("HI");
  return 0;
}
```
### Rust-lang
```rust
fn main(){
  println!("pizza")
}

```

## Variables
### Go-lang
```go
package main

import "fmt"

func main() {
	numero := 1       // name := expression
	var num int = 123 // var name tipe = expression
	var val int
	val2 := 0
	var val3 float64
	uno, dos, tres := 1, 2, 3

	foo := 23_000.22222222
	more := 25_000.33333333
	val3 = foo + more

	fmt.Println("HELLO")
	fmt.Println(numero)
	fmt.Printf("%d %d     %.3f\n", numero, num, val3)

	fmt.Println(uno, dos, tres, val, val2, val3)

}
```

### C
```c
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
```
### C++
```c++
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
```
### Rust-lang




















---


### Go-lang
### C
### C++
### Rust-lang