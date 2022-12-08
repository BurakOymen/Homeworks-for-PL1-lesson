#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Convert a decimal number, n, to binary format. */
  
  int n, sum=0, rem, place=1;

  printf("Please enter a decimal number\n");

  scanf("%d", &n);
   
  printf("\n");
   
  while(n>0)
  {
            rem = n % 2;

            n /= 2;
   
            sum = sum + rem * place;

            place *= 10;  
  }
   
  printf("Binary number is : %d\n", sum);

  system("PAUSE");	
  
  return 0;
  
}
