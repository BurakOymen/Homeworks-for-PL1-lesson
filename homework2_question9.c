#include <stdio.h>
#include <math.h>

int main()
{
	
	/* Check whether a number is Armstrong number or not. */
	
	int n, temp, rem, digit=0 , sum=0;
	
	printf("Please enter a number ");
	
	scanf("%d", &n);
	
	temp = n;
	
	while(temp != 0)
	{
		temp /= 10;
		
		digit++;
    }
    
    temp = n;
    
    while(temp != 0)
    {
    	rem = temp % 10;
    	
    	sum += pow(rem, digit);
    	
    	temp /= 10;
	}
	
	if(sum == n)
		
		printf("Armstrong number");
	
	else
	
		printf("Not Armstrong number");
		
	return 0;
	
}
