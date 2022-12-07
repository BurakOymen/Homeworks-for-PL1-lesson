#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Read 10 numbers from the user and print out 
  their sum, and their product. */
  
  int N, i, sum=0, product=1;
  
  for(i=1 ; i<=10 ; i++)
  {
      printf("Please enter a number\n");
      
      scanf("%d", &N);
      
      sum += N;
      
      product *= N;
  }   
  
  printf("Sum = %d\n", sum);
  
  printf("Product = %d\n", product);        

  system("PAUSE");	
  
  return 0;
  
}
