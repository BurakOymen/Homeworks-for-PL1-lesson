#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Computing factorial N (N!) */
  
  int N, c, f=1;
  
  printf("Please enter a number\n");
  
  scanf("%d", &N);
  
  printf("\n");
  
  if(N<0)
  {
         printf("Error! Factorial of a negative number doesn't exist\n");
         
         printf("Please enter a not negative number\n");
         
         scanf("%d", &N);
         
         printf("\n");
  }      
   
  for(c=1 ; c<=N ; c++)  
  {
          f *= c;
  }
  
  printf("Factorial of %d is : %d\n", N, f);        

  system("PAUSE");
  	
  return 0;
  
}
