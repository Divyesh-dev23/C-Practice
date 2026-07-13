#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertBeg()
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &newNode->data);

    newNode->next = head;
    head = newNode;

    printf("Node inserted successfully.\n");
}

void insertEnd()
{
    struct Node *newNode, *temp;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    printf("Node inserted successfully.\n");
}

void insertPos()
{
    int pos, i;
    struct Node *newNode, *temp;

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos <= 0)
    {
        printf("Invalid Position\n");
        return;
    }

    if (pos == 1)
    {
        insertBeg();
        return;
    }

    if (head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &newNode->data);

    temp = head;

    for (i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid Position\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    printf("Node inserted successfully.\n");
}

void deleteBeg()
{
    struct Node *temp;

    if (head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    temp = head;
    head = head->next;

    printf("Deleted node: %d\n", temp->data);

    free(temp);
}

void deleteEnd()
{
    struct Node *temp, *prev;

    if (head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    if (head->next == NULL)
    {
        printf("Deleted node: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    temp = head;

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;

    printf("Deleted node: %d\n", temp->data);

    free(temp);
}

void deletePos()
{
    int pos, i;
    struct Node *temp, *prev;

    if (head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos <= 0)
    {
        printf("Invalid Position\n");
        return;
    }

    if (pos == 1)
    {
        deleteBeg();
        return;
    }

    temp = head;

    for (i = 1; i < pos && temp != NULL; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid Position\n");
        return;
    }

    prev->next = temp->next;

    printf("Deleted node: %d\n", temp->data);

    free(temp);
}

void display()
{
    struct Node *temp;

    if (head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    temp = head;

    printf("Linked List: ");

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    int n, i, choice;
    struct Node *temp = NULL, *newNode = NULL;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newNode->data);

        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    do
    {
        printf("\n========== MENU ==========\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete from Position\n");
        printf("7. Display\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertBeg();
            break;

        case 2:
            insertEnd();
            break;

        case 3:
            insertPos();
            break;

        case 4:
            deleteBeg();
            break;

        case 5:
            deleteEnd();
            break;

        case 6:
            deletePos();
            break;

        case 7:
            display();
            break;

        case 8:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 8);

    return 0;
}