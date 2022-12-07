#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Count and print all numbers from LOW to HIGH by steps of STEP. */
  
  int low, high, step, j;
  
  printf("Please enter low, high and step values\n");
  
  scanf("%d%d%d", &low, &high, &step);
  
  printf("\n");
  
  for(j=low ; j<=high ; j+=step)
  {
            printf("%d\n", j);
  }
  
  system("PAUSE");	
  
  return 0;
  
}
