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
    head->num = -1; // Sentinel value
    head->ptr = head;
    first = head;

    // Creating the circular linked list
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

    printf("\nStatus of the circular linked list before deletion:\n");
    NODE *tempPtr = head->ptr;
    count = 0;

    // Display the list
    while (tempPtr != head)
    {
        printf("[%d] ", tempPtr->num);
        count++;
        tempPtr = tempPtr->ptr;
    }
    printf("(back to sentinel)\n");
    printf("No. of nodes in the list = %d\n", count);

    // Delete the second element
    if (head->ptr != head && head->ptr->ptr != head)
    {   
        NODE *sec = head->ptr->ptr;
        head->ptr->ptr = sec->ptr;
        free(sec);
        printf("\nsec element deleted successfully.\n");
    }
    else
    {
        printf("\nDeletion not possible (list has fewer than two elements).\n");
    }

    // Display the list after deletion
    printf("\nStatus of the circular linked list after deletion:\n");
    tempPtr = head->ptr;
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
