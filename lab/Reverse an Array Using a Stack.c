#include <stdio.h>
#include <stdlib.h>

// Define the stack structure
struct Stack
{
    int *arr;
    int top;
    int capacity;
};

// Function to create a stack with a given capacity
struct Stack *createStack(int capacity)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1; // Stack is initially empty
    stack->arr = (int *)malloc(capacity * sizeof(int));
    return stack;
}

// Function to check if the stack is full
int isFull(struct Stack *stack)
{
    return stack->top == stack->capacity - 1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

// Function to push an element onto the stack
void push(struct Stack *stack, int value)
{
    if (isFull(stack))
    {
        printf("Stack overflow\n");
        return;
    }
    stack->arr[++stack->top] = value;
}

// Function to pop an element from the stack
int pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack underflow\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

// Function to reverse the array using the stack
void reverseArray(int arr[], int size)
{
    struct Stack *stack = createStack(size);

    // Push all elements of the array onto the stack
    for (int i = 0; i < size; i++)
    {
        push(stack, arr[i]);
    }

    // Pop elements from the stack and place them back into the array
    for (int i = 0; i < size; i++)
    {
        arr[i] = pop(stack);
    }

    // Free the allocated memory for the stack
    free(stack->arr);
    free(stack);
}

int main()
{
    // Original array
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    printf("Original Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reverse the array using the stack
    reverseArray(arr, size);

    // Display the reversed array
    printf("Reversed Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
