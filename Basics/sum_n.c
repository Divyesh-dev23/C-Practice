#include<stdio.h>

int main(){
    int n,sum=0,i;
    printf("Enter value of n:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum += i;
    }

    printf("Sum of %d numbers = %d",n,sum);

    return 0;
}