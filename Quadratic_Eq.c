#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float D,X1,X2;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);
    D=((b*b)-4*a*c); 
    if(D>=0)
    {
        X1=(-b+sqrt (D))/2*a;
        X2=(-b-sqrt(D))/2*a;
        printf("root is :%f",X1);
        printf("\nother root is :%f",X2);
    }
    else
        printf("roots are imaginary");
        
}
