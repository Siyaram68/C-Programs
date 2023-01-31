#include<stdio.h>
void main()
{
    int i,j,m,n,a[20][20],b[20][20];
    printf("Enter rows and column:");
    scanf("%d%d",&m,&n);
    printf("\nEnter elements:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    b[0][0]=m;
    b[0][1]=n;
    int k=1;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                b[k][0]=i+1;
                b[k][1]=j+1;
                b[k][2]=a[i][j];
                k=k+1;
            }
        }
    }
    k=k-1;
    b[0][2]=k;
    printf("\nElements are:");
    for(i=0;i<=k;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
}
