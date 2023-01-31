#include <stdio.h>

int factorial(int);

void main(){
    int n, result;
    printf("Enter the number whose factorial is to be found out: ");
    scanf("%d", &n);
    result = factorial(n);
    printf("The result of the factorial is: %d", result);
}

int factorial(n){
    if (n != 1)
        return (n*factorial(n-1));
}
