#include <stdio.h>
#include <math.h>

/* program to print fibonacci numbers recursively
   @author Aly Milich
   */

int fibonacci(int x){

	int fib;

	if(x == 1 || x ==2)
		fib = 1;

	else{
		fib = fibonacci(x-1) + fibonacci(x-2);
	}
	return fib;
}

int main(){

	int input, answer;

	printf("Print the fibonacci number you would like to see.\n");
	scanf("%d", &input);

	answer = fibonacci(input);
	printf("%d", answer);

	return 0;
}
