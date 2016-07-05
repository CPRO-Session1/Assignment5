#include <stdio.h>
int fibonacci(int i, int K)
{
	static int x = 0;
	if (K == 0)
	{
		return 0;
	}
	x += i;
	i = x - i;
	printf("%d\n", x);
	return fibonacci(i, K - 1);
}
int main()
{
	int amount, input = 1;
	printf("How many numbers would you want in the sequence?\n");
	scanf("%d", &amount);
	fibonacci(input, amount);
	return 0;
}
