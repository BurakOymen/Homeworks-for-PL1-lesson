#include <stdio.h>

int main()
{
	
	/* C code to display the sum of the series [1+x+x^2/2!+x^3/3!+....] */
	
	float x, sum, rowNo;
	
	int i, n;
	
	printf("Please enter the value of x ");
	
	scanf("%f", &x);
	
	printf("Please enter number of terms ");
	
	scanf("%d", &n);
	
	sum = 1; 
	
	rowNo = 1;
	
	for (i=1 ; i<n ; i++)
	{
	  rowNo = rowNo * x / (float)i;
	  
	  sum = sum + rowNo;
	}
	
	printf("\nSum = %.2f", sum);
	
	return 0;
	
} 
