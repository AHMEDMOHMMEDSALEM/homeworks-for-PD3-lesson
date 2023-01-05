#include<stdio.h>

int main()
{
	int num, temp, sum=0, mum;
	
	printf("enter the number");
	scanf("%d", &num);
	mum=num;
	
	while(num>0)
	{
		temp=num%10;
		
		sum=sum+(temp*temp*temp);
		
		num=num/10;
	}
      if(mum==sum)
	  
	printf("it is an amstrong number.");
	 else 
	printf("it is not an amstrong number.");
    return 0;
}
