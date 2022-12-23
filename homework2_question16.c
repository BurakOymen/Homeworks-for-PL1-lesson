#include <stdio.h>
#include <math.h>

int main() 
{
	
	/* C code to find the sum of the series [1-X^2/2!+X^4/4!- .........]. */

    int n, x, i;
    
    printf("C program to find the sum of the series [1-X^2/2!+X^4/4!- .........]\n\n");
	
	printf("Please enter base ");
    
    scanf("%d", &x);
    
    printf("Please enter number of terms ");
    
    scanf("%d", &n);
    
	double sum=1.00, fact=1.0, s=1.0, p=1.0;
    
    for(i=1 ; i<=n ; i++) 
	{
        s = s * (-1.0);
        
        p = pow(x, 2*i);
        
        fact = fact*2.0*i*(2.0*i-1.0);
        
        double term = s * p / fact;
        
        sum = sum + term;
    }
    
    printf("Sum = %0.2f", sum);
    
    return 0;
    
}
