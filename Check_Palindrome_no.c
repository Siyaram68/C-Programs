#include<stdio.h>
void main()
{
    int n,rem,rev=0,temp;
    printf("Enter value:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        rev=(rev*10)+rem;
    }
    if(temp==rev)
    {
    printf("Given no. is Palindrome no.");
    }
    else
        printf("Given no. is not palindrome no.");
}
