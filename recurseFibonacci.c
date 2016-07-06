#include <stdio.h>
//I cannot get this code to print the fibonacci sequence without having a zero case in the function and then it always prints zero as the first term
int fibonacci(int N){
	if (N==1)
	{
	return 1;
	}
	else
	{
	return fibonacci(N-1) + fibonacci(N-2);
	}
}
void main(){
	int K;
	int c;
	int i;
	printf("enter the number of terms you want to print\n");
	scanf("%d",&K);
	for (i=0;i<K;i++)
	{
	printf("%d\n", fibonacci(c));
	c++;
	}
}
