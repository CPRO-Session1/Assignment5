/*Ava N.*/
//fibonacci sequence as a loop
#include <stdio.h>
#include <math.h>
 
int main(){
	int input;
	int num1=0;
	int num2=1;
	int answer;
	int counter;
 
	printf("Enter the number of terms\n");
	scanf("%d", &input);
 
	printf("Here is the Fibonacci Sequence: \n");
 
		for (counter=0; counter<input; counter++){
			if (counter<=1){
				answer=counter;
			}
			else{
				answer=num1+num2;
				num1=num2;
				num2=answer;
			}
		printf("%d \n",answer);
		}
	return 0;
}
