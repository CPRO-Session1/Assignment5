/*Lloyd Page*/
/*Looped Fibonacci with Repeats*/
#include<stdio.h>
int main()
{
	char n;
	do
	{
		char handler[100];
		int size;
		int x=1;
		int y=1;
		int z;
		while(1)
		{
			printf("Enter a number\n");
			fgets(handler,sizeof(handler),stdin);
			if(sscanf(handler,"%d",&size))
				break;
			printf("Invalid input\n");
		}
		printf("%d\n",x);
		printf("%d\n",y);
		for(int i=0;i<size-2;i++)
		{
			z=x+y;
			printf("%d\n",z);
			y=x;
			x=z;
		}
		printf("Run Again?(y/n)\n");
		n=getchar();
		fgets(handler,sizeof(handler),stdin);
	}while((n=='y')||(n=='Y'));
	return 0;
}
