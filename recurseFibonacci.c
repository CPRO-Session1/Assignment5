/* Yael Kelmer.
 This code prompts the user for the amount of elements of the Fibonacci series that they would like to see and the code uses a recursion to give those numbers. */

#include <stdio.h>

	/*This was my second attempt at fixing the code, but this printed all of the duplicate values that get calculated in the recursive calls. */
	/*int x;
	int numberInSeries;
	int fib (int x) {
		if (x == 1) {
			printf ("1\n");
			return 1;
		}
		if (x == 2) {
			printf ("1\n");
			return 1;
		}
		else {
			numberInSeries = fib (x-1) + fib (x-2);
			printf ("%d\n", numberInSeries);
			return numberInSeries;
		}
	}*/

/* this is my final code and it works! */
int sum;
int fib(int x, int y, int z, int i) {
	if (i >= z) {
		return;
	}
	sum = x + y;
	printf ("%d\n", sum);
	return fib (y, x+y, z, i+1);
	
}

int main () {
	int z;
	printf ("Please type the amount of numbers in the Fibonacci series that you would like to see\n");
	scanf ("%d", &z);
	
	printf ("This is the first %d elements in the Fibonacci series\n", z);
	printf ("1\n1\n");	
	fib (1, 1, z, 2);

	/* This was my first attempt at printing all of the values for the Fibonacci series, but it was inefficient, so I tried another code. */
	/*int i;
	int numberInSeries;
	printf ("This is the Fibonacci series:");
	for (i = 1; i <= x; i++) {
		numberInSeries = fib (i);
		printf ("%d ", numberInSeries);
	}
	printf ("\n");*/ 
}

