#include<stdio.h>
void main()
{
    int n,rem,sum=0;
    printf("Enter value:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    printf("Sum of digits in number:%d",sum);

}
