#include <stdio.h>

int main() {

int n, next, i, first = 0, second = 1;
	printf("Enter K number of the Fibonacci sequence.\n");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		if (i <= 1)
			next = 1;
		else {
			next = first + second;
			first = second;
			second = next;
		}
		printf("%d\n", next);
	}
	return 0;
}
