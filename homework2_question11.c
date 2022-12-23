#include <stdio.h>

int main()
{
	
	/* Check whether a number is Perfect number or not. */
	
	int n, i, sum=0;
	
	printf("Please enter a number ");
	
	scanf("%d", &n);
	
	for(i=1 ; i<n ; i++)
	{
		if(n % i == 0)
		
		sum += i;
    }
    
    if(sum == n)
    
    	printf("Perfect number");
    
    else
    	
		printf("Not Perfect number");
	
	return 0;
	
}
	
	

