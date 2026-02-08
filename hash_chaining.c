#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

struct node 
{
    int data;
    struct node *next;
};

struct node *hashTable[SIZE];

int hashFunc(int key)
{
    return key%SIZE;
}
//insert into chaining hash

void insert(int key)
{
    int index = hashFunc(key);
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = key;
    newNode->next = NULL;

    if(hashTable[index] == NULL)
    {
        hashTable[index]= newNode;
    }
    else
    {
        struct node *temp = hashTable[index];
        while(temp->next !=NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

//display table

void display()
{
    for (int i=0;i<SIZE;i++)
    {
        struct node *temp = hashTable[i];
        printf("%d -> ", i);
        while(temp != NULL)
        {
            printf("%d-> ",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");

    }
}

int main()
{
    int n, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < SIZE; i++)
        hashTable[i] = NULL;

    for (int i = 0; i < n; i++)
    {
        printf("Enter value: ");
        scanf("%d", &value);
        insert(value);
    }

    display();
}