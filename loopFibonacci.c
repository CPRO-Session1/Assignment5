#include<stdio.h>
int main()
{
	int n, 1st = 0, 2nd = 1, next, c;
	printf ("Enter the number of terms\n");
	scanf ("%d", n);
	printf("First %d terms of Fibonacci series are: -\n",n);
	for (c = 0; c<n; c++)
	{
		if (c <= 1)
		next = c;
		else	
		{
			next = 1st + 2nd;
			1st = 2nd;
			2nd = next;
		{
		printf ("%d\n", next);
		}
		return 0;
	}