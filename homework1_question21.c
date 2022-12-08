#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Find first and last digit of a number. */
  
  int n, first, last;
  
  printf("Please enter a number\n");
  
  scanf("%d", &n);
  
  printf("\n");
  
  last = n % 10;
   
  while(n>=10)
  {
              n /= 10;
  }            
  
  printf("First digit of number is : %d\n", n);
  
  printf("Last digit of number is : %d\n", last);
  
  system("PAUSE");
  	
  return 0;
  
}
