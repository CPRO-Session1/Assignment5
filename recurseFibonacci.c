//Clarke Littlejohn
//recursive fibonacci
#include<stdio.h>
void fib(int[],int,int);

int main(){
	
	int fTerm;
	printf("Enter up to what tarm of the fibonacci sequence you want to see:");
	scanf("%d",&fTerm);
	int fibAry[fTerm];
	fibAry[0]=1;
	fibAry[1]=1;
	int i=2;
	for(;i<fTerm;i++){
		fibAry[i]=0;
	}
	i=2;
	fib(fibAry,i,fTerm);
	for(i=0;i<fTerm;i++){
		printf("%d  ",fibAry[i]);
	}
	printf("\n");
}

void fib(int fibA[],int x,int size){
	if(x==size)
		return;
	fibA[x]=fibA[x-1]+fibA[x-2];
	fib(fibA,++x,size);
}

	
