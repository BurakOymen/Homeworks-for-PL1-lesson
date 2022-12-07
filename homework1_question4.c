#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Determine Whether a Temperature is Below or Above the Freezing Point. */
  
  int T;
  
  printf("Please enter temperature in celsius\n");
  
  scanf("%d", &T);
  
  if(T>0)
         printf("Temperature is above freezing point\n");
  
  else if(T<0)
         printf("Temperature is below freezing point\n");
   
  else
         printf("Temperature is equal to frezing point\n");          
  
  system("PAUSE");	
  
  return 0;
  
}
