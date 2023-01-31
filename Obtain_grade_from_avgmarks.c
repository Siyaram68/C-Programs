#include <stdio.h>
void main()
{
    int A, B, C;
    float avg, marks;
    char grade;
    printf("Enter marks obtained in Physics:");
    scanf("%d", &A);
    printf("Enter marks obtained in Chemistry:");
    scanf("%d", &B);
    printf("Enter marks obtained in Biology:");
    scanf("%d", &C);
    avg = (A + B + C) / 3;
    marks = avg / 10;
    switch ((int)marks)
    {
    case 10:
    case 9:
        grade='S';
         break;
    case 8:
        grade='A' ;
        break;
    case 7:
        grade='B';
         break;
    case 6:
        grade='C' ;
        break;
    case 5:
        grade='D' ;
        break;
    case 4:
        grade='E';
         break;
    default:
        grade='F';
    }
    printf("grade is:%c",grade);
}
