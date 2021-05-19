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
	fmt.Printf("%d %d     %f\n", numero, num, val3)

	fmt.Println(uno, dos, tres, val, val2, val3)

}
