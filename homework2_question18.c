#include <stdio.h>

int main()
{	
 	
 	/* C code to print the Floyd's Triangle. */
	 
	int n, i, j, p, q;
 	
    printf("Please enter number of rows ");
    
	scanf("%d", &n);
    
	for(i=1 ; i<=n ; i++)
    {
     	if(i%2==0)
     	{
     		p=1; 
			
			q=0;
     	}
		
		else
     	{	
		 	p=0;
			
			q=1;
		}
      	
		for(j=1 ; j<=i ; j++)
	 	{
			if(j%2==0)
	    	
				printf("%d",p);
	 
	     	else
	    	
				printf("%d",q);
		}
     	
		printf("\n");
    }

 	return 0;

} 


