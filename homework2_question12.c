#include <stdio.h>

int main()
{
	
	/* Print all Perfect numbers between 1 to n. */
	
	int n, j, k, sum;
	
	printf("Please enter a number ");
	
	scanf("%d", &n);
	
	printf("\nAll Perfect numbers between 1 to %d\n", n);
	
	for(j=1 ; j<=n ; j++)
	{	
			sum = 0;
			
			for(k=1 ; k<j ; k++)
			{
				if(j % k == 0)
					
					sum += k;
            }
    		
    			if(sum == j)
    		
					printf("%d\n", j);
            
	}
    
    return 0;
    
}
		

