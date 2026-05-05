#include <stdio.h>

int factorial(int n){
    int i , fact = 1;

    for(i=2;i<=n;i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n<0){
        printf("Invalid input\n");
        return 0;
    }

    int result = factorial(n);

    printf("Factorial of %d is :- %d", n,result);

    return 0;
}