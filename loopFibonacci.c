//Anya Lauria
//Loop fibonacci 

#include <stdio.h>

int main()
{
   int n, num1 = 0, num2 = 1, current = 1, x;
 
   printf("Enter the number of terms you'd like in the sequence\n");
   scanf("%d",&n);
 
   printf("The terms are:\n");
 
   for ( x = 0 ; x < n; x++ )
   {
    
      printf("%d\n",current);
         current = num1 + num2;
         num1 = num2;
         num2 = current;
      
      
   }
 
   return 0;
}
