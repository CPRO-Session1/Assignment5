#include<stdio.h>
int main () {
	int x,n,a=0,b=1;
	printf("Fibonacci Sequence: \n");
	printf("Enter number of terms: ");
	scanf("%d", &n);
	int arr[n];
	printf("Here is the list: \n%d \n%d \n",a,b);
	for (x=0;x<n-2;x++){
		arr[x]=a+b;
		a=b;
		b=arr[x];
		printf("%d \n",arr[x]);
	}
}
