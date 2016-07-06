//Clarke Littlejohn
//loopFibonacci
#include<stdio.h>


int main(){
	int term;
	printf("Enter a number to see up to that term in the fibonacci sequence:");
	scanf("%d",&term);
	int fibA[term];
	fibA[0]=1;
	fibA[1]=1;
	int i=2;
	for(;i<term;i++){
		fibA[i]=fibA[i-1]+fibA[i-2];
	}
	for(i=0;i<term;i++){
		printf("%d  ",fibA[i]);
	}
	printf("\n");
}




