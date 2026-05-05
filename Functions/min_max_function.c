#include <stdio.h>

int min(int arr[] , int n){
    int i;
    int min = arr[0];

    for(i=1;i<n;i++){
        if(min>=arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int max(int arr[] , int n){
    int i;
    int max = arr[0];

    for(i=1;i<n;i++){
        if(max<=arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int i,n;

    printf("Enter number of elements to enter: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:-\n",n);
    for(i=0;i<n;i++){
        scanf("%d", &array[i]);
    }

    int minimum = min(array , n);
    int maximum = max(array , n);


    printf("The minimum element is: %d\n",minimum);
    printf("The maximum element is: %d\n",maximum);   

    return 0;
}