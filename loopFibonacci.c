#include <stdio.h>
int main ()
{
	int i, K;
	printf("Please input the number of terms in the Fibonacci sequence.\n");
	scanf("%d", &K);

	int first = 0;
	int second = 1;
	int next;

	
	for (i=0;i<K;i++)
	{
		if (i<=1)
		{
			next=i;
		}
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
		printf("%d ",next);
	}
	printf("\n");
	return 0;
}
