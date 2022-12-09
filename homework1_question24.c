#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Find frequency of each digit in a given integer. */
  
  int n, i, j, c, r;
  
  printf("Please enter a number\n");
  
  scanf("%d", &n);
  
  printf("\n");
  
  for(i=0 ; i<=9 ; i++)
  {
          printf("The frequency of %d = ", i);
          
          c = 0;
          
          for(j=n ; j>0 ; j/=10)
          {
                  r = j % 10;
                  
                  if(r==i)
                          c++;
          }                
  
          printf("%d\n", c);
  }       
  
  system("PAUSE");	
  
  return 0;
  
}
