/*Ava N.*/
//This is a program that uses a recursive function to print the first K Fibonacci numbers in sequence. In the Fibonacci sequence, each number is the sum of the 2 before it. The first 2 numbers in the sequence are 1.
#include <stdio.h>
#include <math.h>

int fibo(int K){
		if ( K == 0 ){
			return 0;
		}
		else if ( K == 1 ){
			return 1;
		}
		else{
			return (fibo(K-1) + fibo(K-2));
		}
} 

int main(){
	int K;
	int answer=0;
	int counter;
 
	printf("Type how long you want the fibanocci sequence to be: \n");
	scanf("%d",&K);
 
	printf("Here is the Fibonacci Sequence: \n");
 
	for (counter=1 ; counter<= K ; counter++ ){
		printf("%d\n", fibo(answer));
		answer++; 
		}
}

