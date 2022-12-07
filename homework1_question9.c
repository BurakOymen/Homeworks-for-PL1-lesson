#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Print all numbers between LOW and HIGH that are divisible by NUMBER. */
  
  int low, high, number, j;
  
  printf("Please enter low, high and number values\n");
  
  scanf("%d%d%d", &low, &high, &number);
  
  printf("\n");
  
  for(j=low ; j<=high ; j++)
  {
            if(j%number==0)
                           printf("%d\n", j);
  }                        
                           
  system("PAUSE");
  	
  return 0;
  
}
