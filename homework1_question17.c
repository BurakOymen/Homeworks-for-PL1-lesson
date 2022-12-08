#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Code for with an even natural number (n) as its input which calculates the 
  following formula and writes the result in the standard output: S = 1/2 + 1/4 +
  ... + 1/n. */
  
  float n, i, S=0;
  
  printf("Please enter a even natural number\n");
  
  scanf("%f", &n);
  
  printf("\n");
  
  for(i=2 ; i<=n ; i+=2)
  {
          S += 1/i;
  }        
  
  printf("S = %.2f\n", S);
  
  system("PAUSE");
  	
  return 0;
  
}
