#include <stdio.h>
#define SIZE 10
int hashTable[SIZE];

//hash function
int hashFunction(int key)
{
    return key % SIZE;
}

//insert using linear probing
void insert(int key)
{
    int index = hashFunction(key);
    while(hashTable[index]!= -1)
    {
        index = (index+1)%SIZE;
    }
    hashTable[index]=key;
}

//display
void display()
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d -> %d\n", i, hashTable[i]);
    }
}

int main()
{
    int n, value;

    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter value: ");
        scanf("%d", &value);
        insert(value);
    }

    display();
}





