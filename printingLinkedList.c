#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int n, value;

    printf("Enter the length of linked list: ");
    scanf("%d", &n);

    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *newnode = NULL;

    for (int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter value of node %d: ", i + 1);
        scanf("%d", &value);

        newnode->data = value;
        newnode->next = NULL;

        // linking inside loop
        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    printf("\nLinked List:\n");

    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
