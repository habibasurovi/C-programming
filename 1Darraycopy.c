#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter array size:");
    scanf("%d", &n);
    int arr[n];
    int arr1[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements of array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    for(i=0;i<n;i++)
    {
        arr1[i]=arr[i];
    }
    printf("\nAfter copying: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr1[i]);
    }
}
