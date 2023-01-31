#include<stdio.h>
int linearsearch(int ,int *,int);
void main()  
{
int i,l,n,m,a[10];
printf("Enter size of array:");
scanf("%d",&n);
printf("\nEnter elements:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("\nEnter element to be found:");
scanf("%d",&m);
linearsearch(n,a,m);
}
int linearsearch(int n,int *a,int m)
{
    int i,l;
    for(i=0;i<n;i++)
    {
        if(m==a[i])
        {
            l=1;
            break;
        }
    }
    if(l==1)
    {
        printf("%d is found at position %d",m,i+1);
    }
    else
    {
        printf("%d is not found",m);
    }
}
