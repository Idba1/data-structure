// Queue --> FIFO

#include <stdio.h>
#define queue_n 100

int queue[queue_n];
int front = 0;
int rear = 0;

void display()
{
    if (front == rear)
    {
        printf("queue is empty!\n");
    }
    else
    {
        printf("current queue: ");
        for (int i = front; i < rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

void enqueue(int value)
{
    if (rear >= queue_n)
    {
        printf("queue is full! cannot enqueue %d\n", value);
    }
    else
    {
        queue[rear] = value;
        rear++;
        printf("%d added to the queue.\n", value);
        display();
    }
}

void dequeue()
{
    if (front == rear)
    {
        printf("queue is empty.\n");
    }
    else
    {
        printf("%d removed from the queue.\n", queue[front]);
        front++;
        display();
    }
}

int main()
{
    int choice, value;

    printf("Queue --> FIFO\n");
    printf("1. enqueue\n");
    printf("2. dequeue\n");
    printf("3. exit\n");

    while (1)
    {
        printf("Choose an option (1/2/3): ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter a value to enqueue: ");
            scanf("%d", &value);
            enqueue(value);
        }
        else if (choice == 2)
        {
            dequeue();
        }
        else if (choice == 3)
        {
            printf("Exit\n");
            break;
        }
        else
        {
            printf("Invalid choice! Please try again.\n");
        }
    }

    printf("current queue: \n");
    display();
    return 0;
}
