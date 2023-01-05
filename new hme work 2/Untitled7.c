#include<stdio.h>

int main()
{
   int i, j, num, Prime; 
    
    
    printf("Find prime numbers between 1 to : ");
    scanf("%d", &num );

    printf("All prime numbers between 1 to %d are:\n", num);

    
    for(i=2; i<=num; i++)
    {
        
        Prime = 1; 

        for(j=2; j<=i/2; j++)
        {
           
            if(i%j==0)
            {
                Prime = 0;
                break;
            }
        }

        if(Prime==1)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}

	

