#include <stdio.h>


int loopFibonacci(int N){
	int first;
	int second;
	int next;
	first = 0;
	second = 1;
               first=second;
                second=next;
		return next;
}
void main(){
	int b;
	int i;
        printf("How many terms: \n");
	scanf("%d\n",&b);
	for (i=0;i<b;i++)
        {
	printf("%d\n", loopFibonacci(b));
	}
}
