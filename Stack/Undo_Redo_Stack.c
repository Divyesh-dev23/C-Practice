#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 100

char undoStack[MAX][50];
char redoStack[MAX][50];

int undoTop = -1;
int redoTop = -1;

void push(char stack[][50], int *top, char action[])
{
    if (*top < MAX - 1)
    {
        (*top)++;
        strcpy(stack[*top], action);
    }
}

void pop(char stack[][50], int *top, char action[])
{
    if (*top >= 0)
    {
        strcpy(action, stack[*top]);
        (*top)--;
    }
}

void undo()
{
    char action[50];

    if (undoTop == -1)
    {
        printf("Nothing to undo\n");
        return;
    }

    pop(undoStack, &undoTop, action);
    push(redoStack, &redoTop, action);

    printf("Undo: %s\n", action);
}

void redo()
{
    char action[50];

    if (redoTop == -1)
    {
        printf("Nothing to redo\n");
        return;
    }

    pop(redoStack, &redoTop, action);
    push(undoStack, &undoTop, action);

    printf("Redo: %s\n", action);
}

int main()
{
    int choice;
    char action[50];

    while (1)
    {
        printf("\n1. Perform Action");
        printf("\n2. Undo");
        printf("\n3. Redo");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter action: ");
                scanf("%s", action);

                push(undoStack, &undoTop, action);
                redoTop = -1;

                break;

            case 2:
                undo();
                break;

            case 3:
                redo();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}