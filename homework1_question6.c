#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Convert the length in feet to centimeter. */
  
  float ft,cm;
  
  printf("Please enter length in feet\n");
  
  scanf("%f", &ft);
  
  cm = 30.48 * ft;
  
  printf("%.2f centimeters\n", cm);
  
  system("PAUSE");
  	
  return 0;
  
}
