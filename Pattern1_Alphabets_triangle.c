#include<stdio.h>      
void main(){ 
  int ch=65;    
    int i,j,k,m,n;
    printf("Enter no. of rows:");
    scanf("%d",&n);      
    for(i=1;i<=n;i++)    
    {    
        for(j=1;j<=n-i;j++)    
            printf(" ");    
        for(k=1;k<=i;k++)    
            printf("%c",ch++);    
            ch--;    
        for(m=1;m<i;m++)    
            printf("%c",--ch);    
        printf("\n");    
        ch=65;    
    }      
} 
