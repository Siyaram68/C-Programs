#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*i);
    }
    printf("Sum of");
    for(i=1;i<=n;i++)
    {
        printf("%d",i*i);
        if(i<n)
        {
            printf("+");
        }
    }
    printf("is %d",sum);
}
