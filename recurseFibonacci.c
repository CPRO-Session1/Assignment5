#include <stdio.h>

int fibonacci(int n){
    static int seq[50] = {0};

    if (n > 50) {
        printf("number too large\n");
        return 0;
    }
    if (seq[n-1] == 0) {
        if (n<=2) {
            seq[n-1] = 1;
        } else {
            seq[n-1] = fibonacci(n-1) + fibonacci(n-2);
        }
        printf("%d ", seq[n-1]);
    }
    return seq[n-1];
}


int main()
{
	
	int n;
	int answer;
	printf("Enter the number of terms you'd like in the sequence\n");
	scanf("%d",&n);
        
	answer = fibonacci(n);




}
