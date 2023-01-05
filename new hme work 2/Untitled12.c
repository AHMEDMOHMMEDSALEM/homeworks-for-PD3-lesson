#include<stdio.h>

int main()
{
   int num, sum=0, i, d=0;
   int MyArray[5]={};
   
   printf("enetr the number: ");
   scanf("%d", &num);
   
   
   for(i=1; i<num; i++)
   {
   	    sum=num %i;
   	    
   	    if(sum== 0)
   	    {

		 MyArray[d]=i;
		  ++d;	
        }
   	  
   			
	}
		   	     int in, Result=0;
			for(in=0; in<d; in++){
				Result = Result + MyArray[in];
			}
			if(Result == num )
				printf("\n It' a perfect number. ");
				else
				printf("\n It's not a perfect number.");
			
			return 0;
 
}
