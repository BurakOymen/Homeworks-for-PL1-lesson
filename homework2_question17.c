#include <stdio.h>

int main()
{
	
	/* C code to display the n terms of harmonic series and their sum. 
	(1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms) */
	
    int n, i;
      
    float s;
      
    printf("1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n");
      
    printf("\n\nPlease enter value of n ");
      
    scanf("%d", &n);
      
    for(i=1 ; i<=n ; i++)
    {
        s = s + (1 / (float)i);

        if(i == 1)
            
        	printf("\n1 +");
                  
        else if(i == n)
            
            printf("(1/%d)  ", i);
    	              
        else
            
            printf(" (1/%d) + ", i);              
    }
      
    printf("\n\nSum = %.2f", s);
      
    return 0;  
	        
}
