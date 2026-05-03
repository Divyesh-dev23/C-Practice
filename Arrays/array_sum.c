#include <stdio.h>

int main(){
    int n,i,sum=0;

    printf("Enter number of values to insert(n): ");
    scanf("%d", &n);

    if(n <= 0){
        printf("Invalid input\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d elements:-\n",n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("The entered elements are:-\n");
    for(i=0;i<n;i++){
        printf("%d \t", arr[i]);
    }

    for(i=0;i<n;i++){
        sum += arr[i];
    }

    printf("Sum of all elements is: %d\n",sum);

    return 0;
}