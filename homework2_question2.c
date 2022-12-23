#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  
  /* Find all the roots of a quadratic equation ax2+bx+c=0. */
  
  int b, a, c, d, x1, x2, x;
  
  printf("Please enter a, b and c values\n");
  
  scanf("%d%d%d", &a, &b, &c);
  
  d = pow(b, 2) - 4 * a * c;
  
  if(d>0)
  {
         x1 = (-b + sqrt(d)) / 2 * a;
         
         x2 = (-b - sqrt(d)) / 2 * a;
         
         printf("Two roots : %d and %d\n", x1, x2);
  }
  
  else if(d==0)
  {
         x = (-b + sqrt(d)) / 2 * a;
         
         printf("One root : %d\n", x); 
  }      
  
  else
        printf("There is no real root\n");
  
  system("PAUSE");	
  
  return 0;
  
}
