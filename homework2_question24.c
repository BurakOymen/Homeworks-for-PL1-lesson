#include <stdio.h>

int main()
{   
	
	/* C code to convert a binary number into a decimal number without 
    using array, function and while loop. */
	
	int n1, n, p=1, dec=0, i=1, j, d;

	printf("Please enter a binary number :");
	
	scanf("%d", &n);
	
	n1 = n;
	
	for (j=n ; j>0 ; j=j/10)
	{  
        d = j % 10;
        
		if(i == 1)
            
			p = p * 1;
        
		else
            
			p = p * 2;
        
	    dec = dec + (d * p);
	    
	    i++;
	}
        
	printf("\nDecimal  number is : %d", dec);
		
	return 0;
}
