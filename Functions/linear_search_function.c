#include <stdio.h>

int linear_search(int arr[], int n , int key){
    int i;

    for(i=0;i<n;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int i , n , target=0;

    printf("Enter number of elements to enter: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:-\n",n);
    for(i=0;i<n;i++){
        scanf("%d", &array[i]);
    }

    printf("\nEnter an element to search: ");
    scanf("%d", &target);

    int found = linear_search(array , n , target);

    if(found!=-1){
        printf("\nElement found at index %d\n",found);
    }
    else{
        printf("Element not found");
    }

    return 0;
}