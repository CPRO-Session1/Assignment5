#include <stdio.h>

int Fibnacci(int);

int main() {
	int k, i, j = 0;
		
		printf("Enter K numbers from the Fibonacci sequence.\n");
		scanf("%d", &k);
	for (i = 1; i <= k; i++) {
		printf("%d\n", Fibonacci(j));
		j++;
	}
	return 0;
}

int Fibonacci(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else 
		return (Fibonacci(n - 1) + Fibonacci(n - 2));
}
