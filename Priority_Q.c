#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int pq[SIZE];   // this is the line where numbers stand
int rear = -1;  // -1 means line is empty

// INSERT BASED ON PRIORITY
void enqueue(int value)
{
    // check if line is already full
    if (rear == SIZE - 1)
    {
        printf("Priority Queue Overflow\n");
        return;
    }

    int i;

    // start from end of line and check:
    // "is the new number bigger than existing ones?"
    // if yes → push smaller numbers one step right
    for (i = rear; i >= 0 && pq[i] < value; i--)
    {
        pq[i + 1] = pq[i];   // shift smaller person right
    }

    // now insert new number in correct spot
    pq[i + 1] = value;

    // increase line length
    rear++;

    printf("Inserted successfully with priority\n");
}

// REMOVE HIGHEST PRIORITY (FIRST ELEMENT)
void dequeue()
{
    // check if line is empty
    if (rear == -1)
    {
        printf("Priority Queue Underflow\n");
        return;
    }

    // first element always has highest priority
    printf("Removed element: %d\n", pq[0]);

    // after removing, everyone moves one step forward
    for (int i = 0; i < rear; i++)
    {
        pq[i] = pq[i + 1];
    }

    // reduce size of line
    rear--;
}

// SHOW ALL ELEMENTS
void display()
{
    if (rear == -1)
    {
        printf("Priority Queue Empty\n");
        return;
    }

    printf("Queue: ");
    for (int i = 0; i <= rear; i++)
    {
        printf("%d | ", pq[i]);
    }
    printf("\n");
}

int main()
{
    int ch, value;

    while (1)
    {
        printf("\n1. Enqueue (Insert with Priority)\n");
        printf("2. Dequeue (Remove Highest Priority)\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
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
