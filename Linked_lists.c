#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    int n , i;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    struct node *head = NULL , *temp = NULL , *newnode = NULL;

    for(i=0; i<n; i++){
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter the data for node %d: ", i+1);
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if(head==NULL){
            head = newnode;
            temp = head;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
    }
    temp = head;

    printf("The linked list is: ");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}