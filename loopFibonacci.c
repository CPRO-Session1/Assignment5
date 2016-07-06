/* Yael Kelmer.
   This code prompts the user for the amount of elements of the Fibonacci series that they would like to see and the code uses a loop to give those numbers. */

#include <stdio.h>

int main () {
	
	printf ("Please type the amount of numbers of the Fibonacci series that you would like to see:\n");
	int numberOfElements;
	scanf ("%d", &numberOfElements);

	int i;
	int n;
	int n1 = 1;
	int n2 = 1;

	printf ("This is the first %d elements in the Fibonacci series\n", numberOfElements);
	if (numberOfElements == 1) {
		printf ("%d\n", n2);
	}
	else {
		printf ("%d\n%d\n", n2, n1);
	}
	for (i = 0; i < numberOfElements - 2; i++) {
		n = n1 + n2;
		n2 = n1;
		n1 = n;
		printf ("%d\n", n);
	}
}
