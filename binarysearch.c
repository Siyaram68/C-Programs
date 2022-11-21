#include<stdio.h>
void main()
{
    int A[100],n,i,low,high,mid,data;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter data to be searched:");
    scanf("%d",&data);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high)
    {
        if(A[mid]==data)
        {
        printf("Search found at position:%d",mid+1);
        break;
        }
        else if(data<A[mid])
        {
            high=mid-1;
            low=0;
            mid=(low+high)/2;
            printf("Search found at position:%d",mid+1);
            break;
        }
        else if(data>A[mid])
        {
            low=mid+1;
            high=n-1;
            mid=(low+high)/2;
            printf("Search found at position:%d",mid+1);
            break;
        }
        else
        {
            printf("Search not found");
        }

    }
}