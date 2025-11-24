#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter array size:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements of array:");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nOdd elements:");
    int count=0;
    for(i=0; i<n; i++)
    {
        if(arr[i]%2!=0)
        {
            count++;
            printf("%d ", arr[i]);
        }

    }
    printf("\ncount: %d", count);
}
