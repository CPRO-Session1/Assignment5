// Justin Yu  This is a program that lists the terms of the Fibonacci sequence. //

#include <stdio.h>

int Fibonacci(int y);

int main() {
int a, b, i=0;

printf("Fibonacci\n");
scanf("%d", &a);

for (b = 1; b <= a; b++) {
printf("%d\n", Fibonacci(i));
i++;
}
return 0;
}

int Fibonacci(int y) {

if (y == 0)
	return 0;
else if ( y == 1)
	return 1;
else
	return (Fibonacci(y-1) + Fibonacci(y-2));
}
