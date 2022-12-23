#include <stdio.h>

int main()
{

    /*  Print all Prime numbers between 1 to n. */

	int n, i, j, c=0;

    printf("Please enter a number ");
    
    scanf("%d", &n);

	for(i=2 ; i<=n ; i++)
	{	
		for(j=1 ; j<=i ; j++)
		{
			if(i % j == 0)
			
        	c++;
    	}
    
    	if(c == 2)

    	printf("\n%d", i);

    	c = 0;
	}

	return 0;

}
