#include<stdio.h>

int main()
{
	double a, b, c, delta, root1, root2 , realnum, imagnum;
	 printf("Enter a: b: c:");
	 scanf("%lf %lf %lf", &a, &b, &c);
	 delta=(b*b)-(4*a*c);
	 if (delta > 0) {
        root1 = (-b + sqrt(delta)) / (2 * a);
        root2 = (-b - sqrt(delta)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);}
        
        else if (delta = 0) {
		
        root1= root2 = (-b)/ 2*a ;
        printf("root1=root2= %lf.2", root1);}
        
        else {
        realnum = -b / (2 * a);
        imagnum= sqrt(- delta ) / (2 * a);
        printf("root1 = %.2lf+ %.2lfi and root2 = %.2f- %.2fi", realnum, imagnum, realnum, imagnum);
    }

    return 0;

        
         
	 
}
