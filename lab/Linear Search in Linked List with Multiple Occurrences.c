#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to search for a target value in the linked list
void linearSearch(struct Node *head, int target)
{
    struct Node *current = head;
    int index = 0;
    int found = 0;

    while (current != NULL)
    {
        if (current->data == target)
        {
            printf("Element %d found at index %d\n", target, index);
            found = 1;
        }
        current = current->next;
        index++;
    }

    if (!found)
    {
        printf("Element %d not found in the linked list.\n", target);
    }
}

int main()
{
    // Create linked list: 10 -> 20 -> 30 -> 20 -> 40 -> NULL
    struct Node *head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(20);
    head->next->next->next->next = createNode(40);

    // Display the linked list
    printf("Linked List: ");
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Perform linear search for a target value
    int target = 20;
    printf("Searching for %d in the linked list...\n", target);
    linearSearch(head, target);

    return 0;
}
