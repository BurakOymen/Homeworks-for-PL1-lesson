#include <stdio.h>

int main()
{
	
	/*  Print all Strong numbers between 1 to n. */
	
	int n, j, temp, lastDigit, k, fact, sum;
	
	printf("Please enter a number ");
	
	scanf("%d", &n);
	
	printf("\nAll Strong numbers between 1 to %d", n);
	
	for(j=1 ; j<=n ; j++)
	{
		temp = j;
		
		sum = 0;
		
		while(temp != 0)
		{
			lastDigit = temp % 10;
			
			fact = 1;
			
			for(k=1 ; k<=lastDigit ; k++)
			{
				fact *= k;
			}
			
			sum += fact;
			
			temp /= 10;
		}
		
		if(sum == j)
			
			printf("\n%d", j);
	}
	
	return 0;
	
}
