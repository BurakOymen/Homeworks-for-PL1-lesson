#include <stdio.h>

int main()
{
   
   /* C program to find the number and sum of all integer between 100 and 
   200 which are divisible by 9. */
   
   int i, sum=0;
   
   printf("Numbers between 100 and 200, divisible by 9 : \n");
   
   for(i=101;i<200;i++)
   {	
   		if(i%9==0)
     	{
       		printf("%d\n",i);
       	
		    sum+=i;
     	}
   }
   
   printf("\nSum = %d ",sum);
   
   return 0;
   
}
