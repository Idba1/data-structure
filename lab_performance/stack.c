// Stack --> LIFO

#include <stdio.h>
#define stack_n 100

int stack[stack_n];
int top = -1;

void display()
{
    if (top == -1)
    {
        printf("Stack is empty!\n");
    }
    else
    {
        printf("Current stack: ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

void push(int value)
{
    if (top >= stack_n - 1)
    {
        printf("Stack is full! Cannot push %d\n", value);
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d pushed into the stack.\n", value);
        display();
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty! Nothing to pop.\n");
    }
    else
    {
        printf("%d popped from the stack.\n", stack[top]);
        top--;
        display();
    }
}

int main()
{
    int choice, value;

    printf("Stack --> LIFO\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Exit\n");

    while (1)
    {
        printf("Choose an option (1/2/3): ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter a value to push: ");
            scanf("%d", &value);
            push(value);
        }
        else if (choice == 2)
        {
            pop();
        }
        else if (choice == 3)
        {
            printf("Exit\n");
            break;
        }
        else
        {
            printf("invalid choice! please try again.\n");
        }
    }

    return 0;
}
