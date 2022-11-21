#include<stdio.h>
void main()
{
    int A[100],n,i,flag=0,data;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter data to be searched:");
    scanf("%d",&data);
    for(i=0;i<n;i++)
    {
        if(A[i]==data)
        {
            printf("Search found at position:%d",i+1);
            flag=1;
        }
    }
        if(flag==0)
        {
            printf("Search not found");
        
        }
}