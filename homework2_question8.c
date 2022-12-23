#include <stdio.h>

int main()
{
	
	/*  Find sum of all prime numbers between 1 to n. */
	
	int n, i, j, c=0, sum=0;
	
	printf("Please enter a number ");
	
	scanf("%d", &n);
	
	for(i=2 ; i<=n ; i++)
	{	
		for(j=1 ; j<=i ; j++)
		{
			if(i % j == 0)
			
        	c++;
    	}
    
    	if(c == 2)

    	sum += i;

    	c = 0;
	}
	
	printf("Sum of all prime numbers between 1 to %d is %d", n, sum);

    return 0;
    
}
