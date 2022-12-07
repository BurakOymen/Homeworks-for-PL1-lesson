#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Convert Temperature from Fahrenheit to Celsius */

  float F, C;
  
  printf("Please enter temperature in fahrenheit\n");
  
  scanf("%f", &F);
  
  C = (F - 32)* 5 / 9;
  
  printf("%.2f celsius\n", C);
  
  system("PAUSE");
  	
  return 0;
  
}
