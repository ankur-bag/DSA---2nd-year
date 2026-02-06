#include <stdio.h>
int main()
{
    printf("enter the size of the araay \n");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("enter the elemnts \n");

    // taking elements from user
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // insersion sort

    for (int i = 0; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    for (int i = 0; i < n; i++)
    {
        printf("sorted array :  %d \n", arr[i]);
    }
}