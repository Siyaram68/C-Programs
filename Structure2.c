#include<stdio.h>
#include<string.h>
struct movie
{
    char name[20];
    char producer[20];
    double budget;
    float duration;
};
void main()
{
    typedef struct movie mov;
    int i,n;
    printf("Enter limits:");
    scanf("%d",&n);
    mov m1[n];
    printf("Movie Name & Movie Producer & Budget & Duration:");
    for(i=0;i<n;i++)

{
    scanf("%s",m1[i].name);
    scanf("%s",m1[i].producer);
    scanf("%lf",&m1[i].budget);
    scanf("%f",&m1[i].duration);
}
for(i=0;i<n;i++)
{
    printf("%s",m1[i].name);
    printf("\t%s",m1[i].producer);
    printf("\t%lf",m1[i].budget);
    printf("\t%f",m1[i].duration);
    printf("\n");
    }
}
