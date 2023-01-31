#include<stdio.h>
float add (float a,float b);
float sub (float a,float b);
float mul(float a,float b);
float div(float a,float b);
void main()
{
    int op;
    float a,b,result=0.0;
    printf("-----MENU DRIVE-----\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter your choice no.:");
    scanf("%d",&op);
    printf("\nEnter two no.:");
    scanf("%f%f",&a,&b);
    switch(op)
    {
        case 1: result=add(a,b);
                printf("%f+%f=%f",a,b,result);
                break;
        case 2: result=sub(a,b);
                printf("%f-%f=%f",a,b,result);
                break;
        case 3: result=mul(a,b);
                printf("%f*%f=%f",a,b,result);
                break;
        case 4: result=div(a,b);
                printf("%f/%f=%f",a,b,result);
                break;
        default: printf("Invalid option");
    }
}
float add(float a,float b)
{
    return a+b;
}
float sub(float a,float b)
{
    return a-b;
}
float mul(float a,float b)
{
    return a*b;
}
float div(float a,float b)
{
    return a/b;
}
