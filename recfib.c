// Write a program, recurseFibonacci.c, that uses a recursive function to print the first K Fibonacci numbers in sequence. In the Fibonacci sequence, each number is the sum of the 2 before it. The first 2 numbers in the sequence are 1.
#include<stdio.h>
int fib (int x){
	if (x==0){
		return 0;
	}else if(x==1){
		return 1;
	} else {
		return (fib(x-1)+fib(x-2));
	}
}
int main(){
	int x,n,i=0;
	printf("Fibonacci Sequence: How many Terms? \n");
	scanf("%d",&x);
	printf("Here is the list: \n");
	for (n=1;n<=x;n++){
		printf("%d\n",fib(i));
		i++;
	}
}
