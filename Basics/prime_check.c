#include <stdio.h>

int main(){
    int n,i;
    int count=1;

    printf("Enter a number:- ");
    scanf("%d", &n);

    if(n<=1){
        printf("%d is not a prime number\n",n);

        return 0;
    }
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            count = 0;
            break;
        }
    }

    if(count==0){
        printf("%d is not a prime number\n",n);
    }
    else{
        printf("%d is a prime number\n",n);
    }

    return 0;
}