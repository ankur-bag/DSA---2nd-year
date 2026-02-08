#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
void createNode()
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
int n;
    printf("enter input \n");
    scanf("%d", &n);

    newNode->data = n;
    newNode->next = NULL;
    head= newNode;

}

int main()
{
    createNode();
    printf("%d    |   %d" ,head->data, head->next);
}
