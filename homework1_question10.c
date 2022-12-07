#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Find the largest of three numbers A, B, and C. */

  int A, B, C;
  
  printf("Please enter A, B and C values\n");
  
  scanf("%d%d%d", &A, &B, &C);
  
  printf("\n");
  
  if(A>=B && A>=C)
          printf("%d is the biggest number\n", A);
  
  else if(B>=A && B>=C)
          printf("%d is the biggest number\n", B);
    
  else
          printf("%d is the biggest number\n", C);                
  
  system("PAUSE");	
  
  return 0;
  
}
