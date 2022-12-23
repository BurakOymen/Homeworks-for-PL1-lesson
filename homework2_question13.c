#include <stdio.h>

int main()
{
	
	/*  Check whether a number is Strong number or not. */
	
	int n, temp, rem, i, sum=0, f;
	
	printf("Please enter a number ");
	
	scanf("%d", &n);
	
	temp = n;
	
	while(n != 0)
	{
		rem = n % 10;
		
		f=1;
		
		for(i=1 ; i<=rem ; i++)
		{
			f *= i;
		}
		
		sum += f;
		
		n /= 10;
	}
	
	if(sum == temp)
	
		printf("Strong number");
		
	else
		
		printf("Not Strong number");
		
	return 0;	
	
}
		
		
