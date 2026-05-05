#include <stdio.h>

int array_sum(int arr[] , int n){
    int i , sum=0;

    for(i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
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

    int result = array_sum(array , n);

    printf("Sum of all elements is: %d",result);

    return 0;
}