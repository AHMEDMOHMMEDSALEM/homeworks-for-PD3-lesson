#include<stdio.h>
 
 int main()
 
{
	int W, L, Aera, Perimeter;
	printf("enter the length: ");
	scanf("%d", &L);
    
    printf("enter the width: ");
    scanf("%d", &W);
    
    Aera=(W * L);
    printf("Aera= %d  ", Aera);
    
    Perimeter=2*(L + W);
    printf("\nPerimeter= %d", Perimeter);
    
    return 0;
}
