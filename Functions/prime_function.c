#include <stdio.h>

int prime_check(int n){
    int i , isprime = 1;

    if(n<=1){
        return 0;
    }

    for(i=2;i<=n/2;i++){
        if(n%i==0){
            isprime = 0;
            return isprime;
        }
    }
    return isprime;
}

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int result = prime_check(n);

    if(result==0){
        printf("%d is not a prime number\n",n);
    }
    else{
        printf("%d is a prime number\n",n);
    }

    return 0;
}