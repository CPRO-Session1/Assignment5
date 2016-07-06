#include <stdio.h>

int main(){
	int k;
	printf("How many numbers do you want?\n");
	scanf("%d", &k);
	int num1 = 1;
	int num2 = 1;
	for(int i = 0; i < k; i++){
		printf("%d\n", num1);
		num2 += num1;
		num1 = num2 - num1;
	}
}
