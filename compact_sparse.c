#include<stdio.h>
void main()
{
    int x,i,j,k,m,n,a[100][100];
    int b[100][100] = {0};
    printf("Enter rows:");
    scanf("%d",&x);
    printf("Enter elements:");
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    m = a[1][1];
    n = a[1][2];
    k = a[1][3];
    for(int i = 2; i <=m; i++){
        int row = a[i][1];
        int col = a[i][2];
        int element = a[i][3];
        b[row][col] = element;
    }
    printf("--------------------------------- SPARSE MATRIX ----------------------------- \n");
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            printf("%d \t", b[i][j]);
        }
        printf("\n");
    }

}
