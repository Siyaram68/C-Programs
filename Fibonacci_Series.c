#include<stdio.h>
void fib(int);
void main()
{
    int n;
    printf("Enter limits:");
    scanf("%d",&n);
    fib(n);
}
void fib(int n)
{
    int i,a=0,b=1,c;
    printf("Fib series: %d %d",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d ",c);
    }
    

}
