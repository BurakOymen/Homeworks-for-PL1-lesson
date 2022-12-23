#include <stdio.h>
#include <math.h>

int main()
{
	
	/* C program to find the sum of the series [ x - x^3 + x^5 + ......] */
	
	int x, sum, ctr;
	
	int i, n, m, mm, nn;
	
	printf("Please enter the value of x ");
	
	scanf("%d", &x);
	
	printf("Please enter number of terms  ");
	
	scanf("%d", &n);
	
	sum =x; 
	
	m=-1;
	
    for (i = 1 ; i < n ; i++) 
    {
        ctr = (2 * i + 1);
        
        mm = pow(x, ctr);
        
        nn = mm * m;
        
        sum = sum + nn;
        
        m = m * (-1);
	}
	
	printf("\nSum = %d\n", sum);
	
	return 0;
	
}
