#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int counter = 1;
    for (int i = 1; i <=n ; i++)
    {
        for(int k=1;k<= i;k++)
    {
        printf(" ");
    }
    // for (int j = 1; j <=n-i; j++)
    // {
    //     printf("%d ", j);
    // }
    for (int k = i; k <= n ; k++)
    {
        printf(" ");
    }
    
    
        for (int j = n-i; j >= 1; j--)
    {
        printf("%d ", counter);
        counter++;
    }
    counter = i+2;
    printf("\n");
    }
    
}
