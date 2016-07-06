/* Matthew Danielson
*  7/5/16
*  fib.c
*  Gets the sum of the fibonacci sequence up to a certain point
*/

#include <stdio.h>

int main(){
	printf("Up to what number of the Fibonacci sequence?");
	int max;
	scanf("%d", &max);
	int array[max+2];
	array[0]=1;
	array[1]=1;
	for(int x = 2; x<max+2; x++){
		array[x] = array[x-1] + array[x-2];
		printf("%d ", array[x]);
	}
	int sum;
	for(int x = 0; x< max+2; x++)
		sum+= array[x];	
	printf("\n%d\n", sum);
}
