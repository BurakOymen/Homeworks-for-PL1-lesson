#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Find the sum of the first 50 natural numbers. */
  
  int j, sum=0;
  
  for(j=0 ; j<50 ; j++)
  {
          sum += j;
  }
  
  printf("Sum of the first 50 natural number is : %d\n", sum);
          
  system("PAUSE");
  	
  return 0;
  
}
