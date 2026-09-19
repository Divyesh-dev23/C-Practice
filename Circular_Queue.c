#include<stdio.h>

#define size 5

int queue[size];
int front = -1;
int rear = -1;

void enqueue(int value){
    if((rear+1)%size == front){
        printf("Queue is full\n");
        return;
    }

    if(front==-1){
        front = 0;
        rear = 0;
    }
    else{
        rear = (rear+1)%size;
    }

    queue[rear] = value;

}

void dequeue(){
    if(front==-1){
        printf("Queue is empty\n");
        return;
    }

    printf("%d deleted\n", queue[front]);

    if(front==rear){
        front=-1;
        rear=-1;
    }
    else{
        front = (front+1)%size;
    }
    printf("\n");
}

void display(){
    int i;

    if(front==-1){
        printf("Queue is empty\n");
        return;
    }

    printf("Queue:\n");
    
    i = front;

    while(1){
        printf("%d ", queue[i]);

        if(i==rear)
            break;

        i = (i+1)%size;
    }
    printf("\n");
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    dequeue();
    display();

    enqueue(40);
    enqueue(50);
    enqueue(60);

    display();

    return 0;
}