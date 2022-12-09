#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Find HCF (Highest Common Factor) of two numbers */
  
  int n1, n2, min, i, hcf=1;
  
  printf("Please enter two numbers\n");
  
  scanf("%d%d", &n1, &n2);
  
  printf("\n");
  
  min = (n1<n2) ? n1 : n2;
  
  for(i=1 ; i<=min ; i++)
  {
          if(n1%i==0 && n2%i==0)
                                hcf = i;
  }                  

  printf("HCF of these numbers is = %d\n", hcf);

  system("PAUSE");
  	
  return 0;
  
}
