#include <stdio.h>

void recurseFibonacci(int num1, int num2, int index, int k){
	printf("%d\n", num1);
	if(index < k)
		recurseFibonacci(num2, num1 + num2, index + 1, k);
}

int main(){
	int k;
	printf("How many fibonacci numbers do you want?\n");
	scanf("%d", &k);
	recurseFibonacci(1, 1, 0, k);
}
