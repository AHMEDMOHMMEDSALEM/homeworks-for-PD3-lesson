#include<stdio.h>

int main()
{
	int num, temp, sum, mum, i, d;
	
	printf("enter the number: ");
	scanf("%d", &d);
	
   
   for(i=1; i<=d; i++)
   {
       sum=0;
       
       num = i; 
   
	    while(num>0)
	    {
		 temp=num%10;
		
		 sum=sum+(temp*temp*temp);
		
		 num=num/10;
		
    	}
	
        	if (i == sum)
        	{
	           printf("\n%d", i);
	
        	}  	

    }
    
    return 0;
}
