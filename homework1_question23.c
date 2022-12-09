#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Check whether a number is palindrome or not. */
  
  int n, temp, rem, sum=0;
  
  printf("Please enter a number\n");
  
  scanf("%d", &n);
  
  printf("\n");
  
  temp = n;
  
  while(n!=0)
  {
             rem = n % 10;
             
             sum = sum * 10 + rem;
             
             n /= 10;
  }          
  
  if(temp==sum)
               printf("Palindrome number\n");
  else
               printf("Not palindrome number\n");
   
  system("PAUSE");
  	
  return 0;
  
}
