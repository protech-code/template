package main

import "fmt"

func main() {
	user := "Minh Duc"
	year := 2026

	fmt.Printf("User: %s, Year: %d\n", user, year)

	numbers := []int{10, 20, 30, 40, 50}
	sum := 0

	for _, n := range numbers {
		sum += n
	}

	fmt.Printf("Total sum calculation: %d\n", sum)
}