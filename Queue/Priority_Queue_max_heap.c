#include<stdio.h>

#define size 5

int heap[size];
int n = 0;

void enqueue(int value){
    int i , parent;

    if(n==size){
        printf("Queue is full\n");
        return;
    }

    i = n;
    heap[n] = value;
    n++;

    while(i>0){
        parent = (i-1)/2;

        if(heap[parent]>= heap[i]){
            break;
        }

        int temp = heap[parent];
        heap[parent] = heap[i];
        heap[i] = temp;

        i = parent;
    }
}

void dequeue(){
    if(n==0){
        printf("Queue is empty\n");
        return;
    }
    
    printf("%d deleted\n", heap[0]);

    heap[0] = heap[n-1];
    n--;

    int i = 0;

    while(1){
        int left = 2*i+1;
        int right = 2*i+2;
        int largest = i;

        if(left<n && heap[left]>heap[largest]){
            largest = left;
        }
        if(right<n && heap[right]>heap[largest]){
            largest = right;
        }
        if(largest==i){
            break;
        }

        int temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;

        i = largest;
    }
}

void display(){
    if(n==0){
        printf("Queue is empty\n");
        return;
    }

    printf("Priority Queue: ");

    for(int i=0; i<n; i++){
        printf("%d ", heap[i]);
    }

    printf("\n");
}

int main(){
    enqueue(20);
    enqueue(10);
    enqueue(30);
    enqueue(5);
    enqueue(15);

    printf("\nAfter insertion:\n");
    display();

    dequeue();
    display();

    dequeue();
    display();

    dequeue();
    display();

    return 0;
}