#include<stdio.h>
void main()
{
    int n,rem,bin=0,place=1;
    printf("Enter decimal no.:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%2;
        n=n/2;
        bin=bin+(rem*place);
        place=place*10;
    }
    printf("Binary no. is:%d",bin);
}
