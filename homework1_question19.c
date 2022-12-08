#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Print multiplication table of any number. */
  
  int n, j;
  
  printf("Please enter a number to print its multiplication table\n");
  
  scanf("%d", &n);
  
  printf("\n");
  
  for(j=1 ; j<=10 ; j++)
  {
          printf("%d * %d = %d\n", n, j, n*j);
  }     
   
  system("PAUSE");
  	
  return 0;
  
}
