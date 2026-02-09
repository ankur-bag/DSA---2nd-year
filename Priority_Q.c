#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int pq[SIZE];   // line where numbers stand
int rear = -1;  // -1 means empty queue

// INSERT WITH PRIORITY
void enqueue(int value)
{
    // check if queue is full
    if(rear == SIZE-1)
    {
        printf("Queue Overflow\n");
        return;
    }

    int i;

    // start checking from end of queue
    for(i = rear; i >= 0; i--)
    {
        // if existing number is smaller
        if(pq[i] < value)
        {
            pq[i+1] = pq[i];   // move smaller number right
        }
        else
        {
            break;   // stop when bigger element found
        }
    }

    // insert new number at correct position
    pq[i+1] = value;

    // increase queue size
    rear++;

    printf("Inserted successfully\n");
}


// REMOVE HIGHEST PRIORITY
void dequeue()
{
    if(rear == -1)
    {
        printf("Queue Underflow\n");
        return;
    }

    // first element always highest priority
    printf("Removed element: %d\n", pq[0]);

    // shift all elements left
    for(int i=0; i<rear; i++)
    {
        pq[i] = pq[i+1];
    }

    rear--;
}


// DISPLAY QUEUE
void display()
{
    if(rear == -1)
    {
        printf("Queue Empty\n");
        return;
    }

    printf("Queue: ");
    for(int i=0; i<=rear; i++)
    {
        printf("%d | ", pq[i]);
    }
    printf("\n");
}


// MAIN MENU
int main()
{
    int ch, value;

    while(1)
    {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
