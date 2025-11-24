#include<stdio.h>
int main()
{
    int n, i, sum=0;
    printf("Enter array size:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements of array: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    int max = arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    printf("\nMaximum element of array: %d", max);
}
