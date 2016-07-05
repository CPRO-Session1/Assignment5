#include <stdio.h>

int main()
{
	int answer = 0, amount, incrementer = 1;
	printf("How many numbers do you want in the array?\n");
	scanf("%d", &amount);
	for (; amount > 0; amount--)
	{
		answer += incrementer;
		incrementer = answer - incrementer;
		printf("%d\n", answer);
	}
	return 0;
}
