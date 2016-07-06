/*Lloyd Page*/
/*Recursive Fibonacci Repeatable*/
#include <stdio.h>
int fibonacci(int);
int print=1;
int main()
{
	char y;
	do
	{
		int c=0;
		print=1;
		char handler[100];
		while(1)
		{
			printf("Enter a number\n");
			fgets(handler,sizeof(handler),stdin);
			if(sscanf(handler,"%d",&c))
				break;
			printf("Enter Something valid\n");
		}
		fibonacci(c);
		printf("Repeat?(y/n)\n");
		y=getchar();
		fgets(handler,sizeof(handler),stdin);
	}while(y=='y'||y=='Y');
	return 0;
}
int fibonacci(int c)
{
	if(c==1||c==2)
	{
		if(print==1||print==2)
		{
			printf("%d\n",1);
			print++;
		}
		return 1;
	}
	int z;
	z=fibonacci(c-1)+fibonacci(c-2);
	if(print==c)
	{
		printf("%d\n",z);
		print++;
	}
	return z;
}
