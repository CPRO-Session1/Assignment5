//Olivier Gabison - Fibonacci sequence with loops

#include <stdio.h>

int main(){

  int n;
  int x = 0;
  int y = 1;
  int z;
  int c;

  printf("Enter the first number\n");
  scanf("%d",&n);

  for (c = 0 ; c < n ; c++)
  {
     if ( c <= 1 )
        z = c;
     else
     {
        z = x + y;
        x = y;
        y = z;
     }
     printf("%d\n",z);
  }

  return 0;
}
