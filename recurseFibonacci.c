#include <stdio.h>

void fib(int k)
{
	static int first = 1, second = 1, sum;
	if (k > 0)
	{
		sum = first + second;
		first = second;
		second = sum;
		printf("%d ", sum);
		fib(k-1);
	}
}

int main()
{
	printf("How many numbers of the Fibonacci Sequence should be printed?\n");
	int k;
	scanf("%d", &k);
	k -= 2;
	printf("1 1 ");
	fib(k);
	return 0;
}

