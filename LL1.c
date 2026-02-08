#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *createNode()
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    int n;
    printf("enter input: ");
    scanf("%d", &n);

    newNode->data = n;
    newNode->next = NULL;
    // head = newNode;

    return newNode;
}

void insertAtBeg()
{
    struct node *newNode;
    newNode = createNode();
    if (newNode == NULL)
    {
        printf("Node not created");
        
    }

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }

    printf("sucsex \n");
    
}
void insertAtMiddle()
{
}
void insertAtEnd()
{
    struct node *newNode;
    newNode = createNode();

    if (newNode == NULL)
    {
        printf("Node not created");
       
    }

    if (head == NULL)
    {
        head = newNode;
    }

    else
    {

        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("Insertion at end sucsexful")
    
}
void deleteAtBeg()
{
}
void deleteAtMiddle()
{
}
void deleteAtEnd()
{
}
void display()
{
}

int main()
{

    printf("1.Insert at Begining \n");
    printf("2.Insert at middle \n");
    printf("3.Insert at end \n");
    printf("4.Delete at Begining \n");
    printf("5.Delete at middle \n");
    printf("6.Delete at end \n");
    printf("6.Display \n");
    printf("8.Exit \n");
    do
    {

        int ch;
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insertAtBeg();
            break;

        case 2:
            insertAtMiddle();
            break;

        case 3:
            insertAtEnd();
            break;
        case 4:
            deleteAtBeg();
            break;

        case 5:
            deleteAtMiddle();
            break;
        case 6:
            deleteAtEnd();
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);

        default:
            printf("Invalid input!!! try again\n");
        }
        printf(" \n");
    } while (1);
}
