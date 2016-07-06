/*Christopher Liu*/
#include <stdio.h>

int get_fibonacci(int num)
{
	if (num <= 1)
	{
		return 1;
	}
	return (get_fibonacci(num-1)+get_fibonacci(num-2));
}

int main()
{
	printf("How many fibonacci? \n");
	int k;
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		printf("%d ", get_fibonacci(i));
	}
	
}
