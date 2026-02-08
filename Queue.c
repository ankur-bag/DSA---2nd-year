#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear >= SIZE - 1)
    {
        printf("Queue overflow\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
        rear++;

    queue[rear] = value;
    printf("enqueued successfully \n");
}

void dequeue()

{
    if (front == -1)
    {
        printf("Queue Underflow\n");
        return;
    }

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = front + 1;
        printf("Dequeued element: %d\n", queue[front]);
    }
    printf("Dequed");
}

void display()
{
    if (front == -1)
    {
        printf("Queue Empty\n");
        return;
    }

    for (int i = front; i <= rear; i++)
    {
        printf("Queue: %d | ", queue[i]);
    }
}

int main()
{
    int k = 1;
    while (k != 0)
    {
        printf("1.Enqueue \n");
        printf("2.Dequeue \n");
        printf("3.Exit");
        int n, ch;
        printf("Enter your choice \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("enter the value \n");
            scanf("%d", &n);
            enqueue(n);
            display();
            break;

        case 2:
            dequeue();
            display();
            break;

        case 3:
            exit(0);

        default:
            printf("Invalid choice");
        }
    }
}