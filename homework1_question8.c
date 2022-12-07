#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Print the SUM of numbers from LOW to HIGH. Test with LOW=3 and HIGH=9. */
  
  int low, high, i, sum=0;
  
  printf("Please enter low and high values\n");
  
  scanf("%d%d", &low, &high);
  
  for(i=low ; i<=high ; i++)
  {
            sum += i;
  }
  
  printf("SUM = %d\n", sum);
  
  system("PAUSE");
  	
  return 0;
  
}
