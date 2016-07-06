#include <stdio.h>

int main(){
	int n,c;
	printf("Please type in a number:\n");
	scanf("%d",&n);
	int fibonacci[n];
	for(c=0;c<n;c++){
		if(c<=1)
			fibonacci[c]=1;
		else
		fibonacci[c]=fibonacci[c-1]+fibonacci[c-2];
		}
	printf("%d",fibonacci[n]);
	return 0;
}


			
