#include<stdio.h>

int getmax(int arr[] , int n){
    int max = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

void countingSort(int arr[] , int n , int place){
    int output[n];
    int count[10] = {0};

    for(int i=0; i<n; i++){
        int digit = (arr[i]/place)%10;
        count[digit]++;
    }
    for(int i=1; i<10; i++){
        count[i] = count[i] + count[i-1];
    }
    for(int i=n-1; i>=0; i--){
        int digit = (arr[i]/place) % 10;
        output[count[digit]-1] = arr[i];
        count[digit]--;
    }
    for(int i=0; i<n; i++){
        arr[i] = output[i];
    }
}

void RadixSort(int arr[] , int n){
    int max = getmax(arr,n);

    for(int place=1; max/place>0; place = place*10){
        countingSort(arr,n,place);
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

    RadixSort(arr,n);

    printf("Sorted array:\n");

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}