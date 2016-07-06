//Olivier Gabison - Fibonacci Sequence with recursive.

#include <stdio.h>

int recursive(int n){

  if(n == 0){
    return 0;
  } else if(n == 1){
    return 1;
  }
  else {
    return (recursive(n - 1) + recursive(n-2));
  }
}

int main(){

  printf("Input a number \n");
  int num;
  int x = 0;
  scanf("\n%d", &num);

  for (int i = 1 ; i <= num ; i++ )
{
   printf("%d\n", recursive(x));
   x++;
}

  return 0;
}
