//Emma Ladouceur
//THis is printing out too many terms, 

#include <stdio.h>


int main(){

	int i, number;

	printf("Enter the number of terms you want to see \n");
	scanf("%d", &number);
	int one =1, zero = 0;

	int answer;
	int go;
	for(i=0; i<number;i++)
	{
		if(i<=1)
		{
			answer = i;

		}
		else
		{
			answer = zero + one;
			zero = one;
			one = answer;
			
		}

		printf("%d\n", answer);

	}

	return 0;

}
			


	



