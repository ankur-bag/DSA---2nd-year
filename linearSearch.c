#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no. of elements \n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter the element you wanna find \n");

    int a ;
    scanf("%d", &a);

    for(int i=0;i<n;i++)
    {
        if(a==arr[i])
        {
            printf("Your element is in index no. : %d" , i);
        }
    }

}