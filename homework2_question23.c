#include <stdio.h>

int main()
{

	/* C code to convert a decimal number into binary without using an 
 	array. */
	
	int n, sum=0, p, a=1;

	printf("Please enter a decimal number ");

	scanf("%d", &n);

	while(n>0)
	{
	p = n % 2;

	sum = sum + p * a;

	n /= 2;

	a *= 10;
	}

	printf("Binary number is : %d", sum);

	return 0;
	
}
