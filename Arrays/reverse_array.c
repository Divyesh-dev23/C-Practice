#include <stdio.h>

int main(){
    int n,i;

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

    printf("The entered elements in array are:-\n");
    for(i=0;i<n;i++){
        printf("%d \t", arr[i]);
    }

    printf("The elements in reverse array:-\n");
    for(i=n-1;i>=0;i--){
        printf("%d \t", arr[i]);
    }
    

    printf("\n");


    return 0;
}