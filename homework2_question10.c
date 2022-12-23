#include <stdio.h>
#include <math.h>

int main()
{
	
	/* Print all Armstrong numbers between 1 to n. */
	
	int n, i,  rem, temp, digit=0, sum=0;
	
	printf("Please enter a number ");
	
	scanf("%d", &n);
	
	
	for(i=1 ; i<=n ; i++)
	{
		temp = i;
		
		while(temp != 0)
		{
			temp /= 10;
		
			digit++;
    	}
    	
            temp = i;
            
			while(temp != 0)
    		{
    			rem = temp % 10;
    	
    			sum += pow(rem, digit);
    	
    		    temp /= 10;
			}
	
			if(sum == i)
	
			printf("%d\n", i);
			
			digit = 0;
			
			sum = 0;		
    }
    
    return 0;

}
