#include<stdio.h>
#define MAX 100

int stack[MAX];

int top1= -1;
int top2 = MAX;

void push_front(int value){
    if(top1 + 1==top2){
        printf("Stack is full\n");
        return;
    }
    top1++;
    stack[top1] = value;
}

void push_rear(int value){
    if(top1 + 1==top2){
        printf("Stack is full\n");
        return;
    }
    top2--;
    stack[top2] = value;
}

void pop_front(){
    if(top1==-1){
        printf("Stack is empty\n");
        return;
    }
    printf("Popped element is %d\n", stack[top1]);
    top1--;

    printf("\n");
}

void pop_rear(){
    if(top2==MAX){
        printf("Stack is empty\n");
        return;
    }
    printf("Popped element is %d\n", stack[top2]);
    top2++;

    printf("\n");
}

void display(){
    if(top1==-1 && top2==MAX){
        printf("Stack is empty\n");
        return;
    }

    printf("Stack from front:\n");
    for(int i=0; i<=top1; i++){
        printf("%d ", stack[i]);
    }

    printf("\n");

    printf("Stack from rear:\n");
    for(int i=top2; i<MAX; i++){
        printf("%d ", stack[i]);
    }

    printf("\n");
}

int main(){
    push_front(10);
    push_front(20);
    push_rear(30);
    push_rear(40);

    display();  

    pop_front();
    pop_rear();

    display();

    return 0;
}
