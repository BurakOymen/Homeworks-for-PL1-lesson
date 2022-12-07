#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Calculate the area of a circle with given radius. */
  
  float pi=3.14, r;
  
  printf("Please enter radius of circle\n");
  
  scanf("%f", &r);
  
  printf("Area of circle is : %.2f\n", pi*r*r);
 
  system("PAUSE");	
  
  return 0;
  
}
