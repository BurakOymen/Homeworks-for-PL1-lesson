#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Determine and Output Whether Number N is Even or Odd. */
  
  int N;
  
  printf("Please enter a number\n");
  
  scanf("%d", &N);
  
  if(N%2==0)
            printf("Number is even\n");
            
  else
            printf("Number is odd\n");          
  
  system("PAUSE");
  	
  return 0;
  
}
