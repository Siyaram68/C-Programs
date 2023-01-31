#include<stdio.h>
void swap(int *,int *);
void main()
{
    int a,b;
    printf("Enter values of a and b:");
    scanf ("%d %d",&a,&b);
    printf("Before Swapping:\n a=%d\nb=%d\n",a,b);
    swap(&a,&b);
    printf("After Swapping:\na=%d\nb=%d\n",a,b);
}
void swap(int*p,int*q)
{
    int temp;
    temp=*q;
    *q=*p;
    *p=temp;

}
