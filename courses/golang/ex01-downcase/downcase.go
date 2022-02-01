package downcase

import (
	"fmt"
)

func Downcase(text string) (string, error) {
	var result string
	fmt.Println("Hello")

	if len(text) > 1 {
		for i := 0; i < len(text); i++ {
			c := text[i]
			if 'A' <= c && c <= 'Z' {
				c += 'a' - 'A'
			}
			result += string(c)
		}
	}
	return result, nil
}
