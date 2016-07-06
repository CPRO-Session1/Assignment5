// Julia Tan
// loopFibonacci.c
#include <stdio.h>

int main(){
	int x;
	int y = 0;
	int a = 0;
	int b = 1;
	int c = 1;
	printf("Print the first how many terms?\n");
	scanf("%d", &x);
	printf("\n");
	for (y = 0; y != x; y ++)
	{
		printf("%d\n", c);
		c = a + b;
		a = b;
		b = c;
	}

}
