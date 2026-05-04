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

    int target;
    printf("\nEnter the element to search: ");
    scanf("%d", &target);

    int found=0;
    for(i=0;i<n;i++){
        if(target==arr[i]){
            found = 1;
            break;
        }
    }
    if(found==1){
        printf("Element %d found at index %d\n",target,i);
    }
    else{
        printf("Element %d not found\n",target);
    }

    return 0;
}