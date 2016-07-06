#include <stdio.h>

long int fibonacci(int n){
	if(n==0)
		return 1;
	else if(n==1)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}


int main(){
	int n,i=0,a;
	printf("Please type in a number:\n");
	scanf("%d",&n);
	for(a=0;a<n;a++){
	printf("%ld",fibonacci(i));
	i++;
	}
	return 0;
}
