#include <stdio.h>

int main()
{
  
  /* C code to find the sum of the series 1 +11 + 111 + 1111 + .. n terms */
  
  int n, i;
   
  long sum=0;
  
  long int t=1;
  
  printf("Please enter the number of terms : ");
  
  scanf("%d", &n);
  
  for(i=1;i<=n;i++)
  { 
	sum=sum+t;
     
	t=(t*10)+1;
  }
  
  printf("\nSum = %ld\n",sum);
  
  return 0;
  
}
