//Emma Ladouceur
//I don't know the fibonacci sequence so while the math for this i believe is incorrect 
#include <stdio.h>

int fib(int);

int main(){

	printf("Enter a number: \n");

	int number, answer;

	scanf("%d", &number);

	answer = fib(number);

	printf("%d\n", answer);


}

int fib(int a){
	int num = 1;

	if(a==0){
		return num;
	}

	num = (a-1) + (a-2);
	return num;
	
	}	
