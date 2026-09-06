#include<stdio.h>

void QuickSort(int arr[] , int low , int high){
    if(low<high){
        int pivot = arr[low];
        int i = low+1;
        int j = high;
        int temp;

        while(i<=j){
            while(i<=high && arr[i]<=pivot){
                i++;
            }
            while(j>=low && arr[j]>pivot){
                j--;
            }
            if(i<j){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;

        QuickSort(arr,low,j-1);
        QuickSort(arr,j+1,high);
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