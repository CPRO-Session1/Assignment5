// Julia Tan
// recurseFibonacci.c
#include <stdio.h>

int fibo(int input);
int main (){
	int x;
	printf("Print the first how many terms?\n");
	scanf("%d", &x);
	printf("\n");
	int fibocall = fibo(x + 1); // fibo function can't return fibo(input), so I added 1 to the integer x, then subtracted 1 from the return statement in the fibo function.
	return 0;
}
int fibo(int input){
	static int a = 0; // first number 
	static int b = 1; // second number 
	static int c = 1; // current number (sum of 1st and 2nd numbers)
	if (input == 0){
		return 0;
	}else if(input == 1){
		return 1;
	}
	printf("%d\n", c);
	c = a + b; // current num = sum of 1st and 2nd
	a = b; // second num becomes 1st num
	b = c; // current num becomes 2nd num
	//printf("%d\n",c); // prints current num
	return fibo(input - 1);

}
