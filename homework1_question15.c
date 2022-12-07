#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Print all natural numbers in reverse (from n to 1) */
  
  int n, i;
  
  printf("Please enter a number\n");
  
  scanf("%d", &n);
  
  printf("\n");
  
  for(i=n ; i>=1 ; i--)
  {
          printf("%d\n", i);
  }        
  
  system("PAUSE");	
  
  return 0;
  
}
