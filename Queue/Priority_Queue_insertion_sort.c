#include<stdio.h>

#define size 10

int queue[size];
int priority[size];

int front = -1;
int rear = -1;

void enqueue(int value , int p){

    int i;
    
    if(rear==size-1){
        printf("Queue is full\n");
        return;
    }

    if(front==-1){
        front = 0;
        rear = 0;

        queue[rear] = value;
        priority[rear] = p;
    }
    else{
        i = rear;

        while(i>=front && priority[i]<p){
            queue[i+1] = queue[i];
            priority[i+1] = priority[i];
            i--;
        }
        queue[i+1] = value;
        priority[i+1] = p;

        rear++;
    }
}

void dequeue(){
    if(front==-1){
        printf("Queue is empty\n");
        return;
    }

    printf("%d deleted\n", queue[front]);

    if(front==rear){
        front = -1;
        rear = -1;
    }
    else{
        front++;
    }
}

void display(){
    int i;

    if(front==-1){
        printf("Queue is empty\n");
        return;
    }

    printf("Queue:\n");

    for(i=front; i<=rear; i++){
        printf("%d(%d) ", queue[i],priority[i]);
    }

    printf("\n");
}

int main(){
    enqueue(10,2);
    enqueue(20,5);
    enqueue(30,1);
    enqueue(40,4);
    enqueue(50,3);

    display();
    dequeue();
    display();
    dequeue();
    display();

    return 0;
}