#include <stdio.h>

int binary(int arr[], int l, int r, int key)
{
    int mid ;
    if (l > r)
    {
        return -1;
    }

    mid = (l + r) / 2;

    if (arr[mid] == key)
    {
        return mid;
    }

    else if ((key < arr[mid]))
    {

        return binary(arr, l, mid - 1, key);
    }

    else
    {
        return binary(arr, mid + 1, r, key);
    }
}

int main()
{
    int n;

    printf("Enter the size of the array");

    scanf("%d", &n);
    int arr[n];

    printf("enter the elements of the array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // sort the array

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int key;

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = binary(arr, 0, n - 1, key);
    if (result != -1)
        printf("Element found at index %d \n", result);
    else
        printf("Element not found\n");
}