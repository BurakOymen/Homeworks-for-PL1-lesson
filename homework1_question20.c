#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Count number of digits in a number. */
  
  int n, c=0;
  
  printf("Please enter a number\n");
  
  scanf("%d", &n);
  
  printf("\n");
  
  while(n!=0)
  {
             n /= 10;
             
             c++;
  }
  
  printf("Number of digits in number is : %d\n", c);           
  
  system("PAUSE");
  	
  return 0;
  
}
