#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Generate even numbers between 1000 and 2000 and then print them 
  in the standard output also print total sum. */
  
  int j, sum=0;
  
  for(j=1000 ; j<=2000 ; j+=2)
  {
             printf("%d\n", j);
             
             sum += j;
  }
  
  printf("Sum = %d\n", sum);
             
  system("PAUSE");
  	
  return 0;
  
}
