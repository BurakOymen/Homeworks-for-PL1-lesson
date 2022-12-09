#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  
  /* Swap first and last digits of a number. */
  
  int num, firstDigit, lastDigit, digits, swappedNum;
  
  printf("Please enter a number\n");
  
  scanf("%d", &num);
  
  printf("\n");
  
  lastDigit = num % 10;
  
  digits = (int)log10(num);
  
  firstDigit = (int) (num / pow(10, digits));
  
  swappedNum  = lastDigit;
  
  swappedNum *= (int) round(pow(10, digits));
  
  swappedNum += num % ((int)round(pow(10, digits)));
  
  swappedNum -= lastDigit;
  
  swappedNum += firstDigit;
  
  printf("Number after swapping first and last digit : %d\n", swappedNum);
  
  system("PAUSE");	
  
  return 0;
   
}
