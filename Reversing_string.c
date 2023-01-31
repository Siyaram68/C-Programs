#include<stdio.h>
#include<string.h>
void main()
{
char s1[20],s2[20];
char *p1,*p2;
printf("Enter string:");
gets(s1);
p1=s1+strlen(s1)-1;
p2=s2;
while(p1>=s1)
{
    *p2=*p1;
    p2++;
    p1--;
}
*p2='\0';
printf("\nString after reverse:%s",s2);
getch();
}
