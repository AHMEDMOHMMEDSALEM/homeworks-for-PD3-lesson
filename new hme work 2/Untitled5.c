#include<stdio.h>

int main()
{
	int num,sum;
	
	printf("Please Enter any Number to Find the Quadruple Exponent");
	scanf("%d", &num);
	sum=pow(num, 4);
	printf("Sum= %d", sum);
	
	return 0;
}
