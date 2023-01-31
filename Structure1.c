#include<stdio.h>
#include<string.h>
struct MOVIE
{
    char title[20];
    char producer[20];
    double budget;
    float duration;
};
void main()
{
    typedef struct MOVIE mov;
    mov m1[1];
    printf("Enter Movie title, Movie producer, Budget,Duration:");
    scanf("%s",m1[1].title);
    scanf("%s",m1[1].producer);
    scanf("%lf",&m1[1].budget);
    scanf("%f",&m1[1].duration);
    printf("%s",m1[1].title);
    printf("\t%s",m1[1].producer);
    printf("\t%lf",m1[1].budget);
    printf("\t%f",m1[1].duration);
    printf("\n");
}
