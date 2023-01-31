#include <stdio.h>
void main()
{
    char h;
    printf("Enter any character:");
    scanf("%c",&h);
    if(h=='a'||h=='e'||h=='i'||h=='o'||h=='u'||h=='A'||h=='E'||h=='I'||h=='O'||h=='U')
    {
        printf("its vowel");
    }
    else
        printf("its consonant");   
}
