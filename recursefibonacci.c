/* Matthew Danielson
*  7/5/16
*  recursefibonacci.c
*  recursive way of doing the fibonacci sequence
*/

#include <stdio.h>

int fibonacci(int);

int main(){
	printf("Up to which digit of the Fibonacci sequence?");
	int max;
	scanf("%d", &max);
	max++;
	printf("%d", fibonacci(max));
}

int fibonacci(int max){
	int count = 0;
	if(max == count)	
		return (fibonacci(count+1)+fibonacci(count+2));
}
