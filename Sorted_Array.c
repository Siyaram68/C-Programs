#include<stdio.h>
void sort(int n,int* ptr);
void main()
{
    int n,i,a[20];
    int *ptr;
    ptr=a;
    printf("Enter limits:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(n,a);
}
void sort(int n,int*ptr)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(ptr+j)<*(ptr +i))
            {
                t=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=t;
            }
        }
    }
    printf("Sorted Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n", *(ptr+i));
    }
}
