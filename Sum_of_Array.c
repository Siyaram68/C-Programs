#include<stdio.h>
int sum_arr(int[],int);
void main()
{
    int n,a[20],i,sum=0;
    printf("Enter limits:");
    scanf("%d",&n);
    printf("Enter values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum=sum_arr(a,n-1);
    printf("sum is %d",sum);
}
int sum_arr(int a[],int n)
{
    if(n < 0)
    {
        return 0;
    }
    else
    {
        return (a[n]+sum_arr(a,n-1));
    }
}
