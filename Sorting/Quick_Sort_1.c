#include<stdio.h>

void QuickSort(int arr[] , int low , int high){
    if(low<high){
        int pivot = arr[high];
        int i = low;
        int j = low;
        int temp;
    
        while(j<high){
            if(arr[j]<=pivot){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
            }
            j++;
        }
        temp = arr[i];
        arr[i] = arr[high];
        arr[high] = temp;

        QuickSort(arr,low,i-1);
        QuickSort(arr,i+1,high);
    }
}

int main(){
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    QuickSort(arr,0,n-1);

    printf("Sorted array:\n");

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}