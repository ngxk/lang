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

	var x bool = true

	if x {
		fmt.Println("boolenao papu")
	}

	if 7%2 == 0 {
		fmt.Printf("Even")
	} else {
		fmt.Print("Odd")
	}

	if num := 9; num < 0 {
		fmt.Println(num, "is negative")
	} else if num < 10 {
		fmt.Println(num, "has 1 digit")
	} else {
		fmt.Println(num, "has multiple digits")
	}

	y := 2

	switch y {
	case 1:
		fmt.Print("uno")
	default:
		fmt.Print("degaulr")
	}

}
