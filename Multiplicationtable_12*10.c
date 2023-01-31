#include <stdio.h>
void main()
{
    // declaring table
    int table[12][12],i,j,sum=0;
    // loop
    for(i = 0; i < 12; i++)
    {
    for(j= 0; j < 10; j++)
        {
            sum = sum+(i + 1);
            table[i][j] = sum;
            // printing table
            printf("%d*%d=%d\t",i+1,j+1,table[i][j]);
        }
        sum = 0;
        printf("\n");
    }

}
