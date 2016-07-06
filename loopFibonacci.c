/*Christopher Liu*/
#include <stdio.h>

int main()
{
	printf("How many Fibonacci numbers? \n");
	int k, n = 1, np1=1, np2 = 0;
	scanf("%d", &k);
	
	for (int i = 0; i < k; i++)
	{
		printf("%d ", (n));
		n = np1+np2;
		np2 = np1;
		np1 = n;
	}

	return 0;
}
