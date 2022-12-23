#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Read the two sides of a rectangle and calculate its area and perimeter  */
  
  int a, b, area, perimeter;
  
  printf("Please enter two sides\n");
  
  scanf("%d%d", &a, &b);
  
  printf("\n");
  
  printf("Area of rectangle is : %d\n", a*b);
  
  printf("Perimeter of rectangle is : %d\n", 2*(a+b));
  
  system("PAUSE");
  	
  return 0;
  
}
