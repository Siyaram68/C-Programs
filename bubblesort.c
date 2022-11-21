#include<stdio.h>
void main()
{
    int A[100],n,i,j,temp;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
        }
        }
    }
    printf("Sorted way is:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",A[i]);
    }
}