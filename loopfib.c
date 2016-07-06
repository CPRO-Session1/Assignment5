#include <stdio.h>

/*print fibonacci numbers with loop
this one doesn't quite work and just prints out 23 when you type 4, I'm not quite sure why...
  @author Aly Milich
  */

int main(){
	int input;
	int fibonacci[input];

	printf("What fibonacci number do you want to see?");
	scanf("%d", &input);

	fibonacci[0] = 1;
	fibonacci[1] = 1;

	for(int i=2; i<input; i++){
		fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
		printf("%d", fibonacci[i]);
	}

	return 0;
}
