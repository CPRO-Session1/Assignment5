// Justin Yu   I'm getting infinite loop but I have no idea why //

#include <stdio.h>

int main() {

int first, second, next, x, i;
first = 0;
second = 1;

printf("Enter the number of terms\n");
scanf("%d", &x);

printf("The terms are %d\n", x);

for( i = 0; i < x; i++) {
if (i <= 1) 
	i = next;
else {
	 next = first + second;
	first = second;
	second = next;
}
printf("%d\n", next);
}
return 0;
}

