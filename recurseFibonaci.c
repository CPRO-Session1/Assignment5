#include<stdio.h>
int fib (int x)
{

	if (x==0)
		return 0;
	if (x==1)
		return 1;
	if (x>1)
	{
		return fib(x-1)+fib(x-2);
	}
	
}
int main()
{
	int x;
	printf("Please input how many terms of the Fibonacci sequence you want.\n");
	scanf("%d", &x);
	int i, n=0;;
	for(i=0; i<x; i++)
	{
		printf("%d ", fib(n));
		n++;
	}
	printf("\n");
	return 0;
}

