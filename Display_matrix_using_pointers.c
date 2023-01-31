#include<stdio.h>
void main()
{
    int r,c,i,j,a[20][20];
    int *ptr[20][20];
    printf("Enter rows:");
    scanf("%d",&r);
    printf("Enter columns:");
    scanf("%d",&c);
    printf("Enter elements:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            ptr[i][j]=&a[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",*ptr[i][j]);
        }
        printf("\n");
    }
}
