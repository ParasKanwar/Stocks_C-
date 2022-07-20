package main

import (
	"time"
	"fmt"
)

func main(){
	start := time.Now().UnixNano();
	somearr := make([]int, 100000000)
	for i := 0; i < 100000000; i++{
		somearr[i] = i;
	}
	// do something
	end := time.Now().UnixNano();
	fmt.Println((end-start)/ 1e6)
}

