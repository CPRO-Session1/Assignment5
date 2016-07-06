#include <stdio.h>

int main()
{
	printf("How many numbers in the fibonacci series do you want to print?\n");
	int k;
	scanf("%d", &k);
	int first = 1, second = 1, sum;
	printf("1 1 ");
	for (int i = 0; i < k -2; i++) 
	{
		sum = first + second;
		first = second;
		second = sum;
		printf("%d ", sum);
	}
	return 0;
}
