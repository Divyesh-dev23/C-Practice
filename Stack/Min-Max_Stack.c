#include<stdio.h>
#define MAX 100

int stack[MAX];
int min_stack[MAX];
int max_stack[MAX];

int top = -1;

void push(int value){
    if(top==MAX-1){
        printf("Stack overflow.\n");
        return;
    }

    top++;
    stack[top] = value;

    if(top==0){
        min_stack[top] = value;
        max_stack[top] = value;
    }
    else{
        if(value<min_stack[top]){
            min_stack[top] = value;
        }
        else{
            min_stack[top] = min_stack[top-1];
        }
        if(value>max_stack[top]){
            max_stack[top] = value;
        }
        else{
            max_stack[top] = max_stack[top-1];
        }
    }
}

void pop(){
    if(top==-1){
        printf("Stack is empty.\n");
        return;
    }

    printf("Popped element is %d\n",stack[top]);
    top--;
}

void get_min(){
    if(top==-1){
        printf("Stack is empty.\n");
        return;
    }

    printf("Minimum element is %d\n", min_stack[top]);
}

void get_max(){
    if(top==-1){
        printf("Stack is empty.\n");
        return;
    }

    printf("Maximum element is %d\n", max_stack[top]);
}

void display(){
    if(top==-1 && top==MAX){
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements:\n");
    for(int i=0; i<=top; i++){
        printf("%d ", stack[i]);
    }

    printf("\n");
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);

    display();  

    get_min();
    get_max();

    pop();

    get_min();
    get_max();

    display();

    return 0;
}