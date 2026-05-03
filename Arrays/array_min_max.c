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

    int min = arr[0];
    int max = arr[0];

    printf("The entered elements are:-\n");
    for(i=0;i<n;i++){
        printf("%d \t", arr[i]);
    }

    printf("\n");

    for(i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }

        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("The max element is: %d\n",max);
    printf("The min element is: %d\n",min);

    return 0;
}