#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *ptr;
};

typedef struct node NODE;

void main()
{
    NODE *head, *first, *temp = NULL;
    int count = 0;
    int choice = 1;

    head = (NODE *)malloc(sizeof(NODE));
    head->num = -1;
    head->ptr = head;
    first = head;

    while (choice)
    {
        NODE *newNode = (NODE *)malloc(sizeof(NODE));
        printf("Enter a data element to insert into the Linked List: ");
        scanf("%d", &newNode->num);
        newNode->ptr = first->ptr;
        first->ptr = newNode;

        printf("Do you want to continue? (Type 0 to exit or any integer to continue): ");
        scanf("%d", &choice);
    }

    printf("\nStatus of the circular linked list is:\n");
    NODE *tempPtr = head->ptr;
    count = 0;

    while (tempPtr != head)
    {
        printf("[%d] ", tempPtr->num);
        count++;
        tempPtr = tempPtr->ptr;
    }
    printf("(back to sentinel)\n");
    printf("No. of nodes in the list = %d\n", count);
}
