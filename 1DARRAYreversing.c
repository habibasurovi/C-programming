#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter array size:");
    scanf("%d", &n);

    int arr[n];
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
    for(i=0;i<n/2;i++)
    {
        int temp= arr[i];
        arr[i]= arr[n-1-i];
        arr[n-1-i]=temp;
    }

    printf("\nAfter reversing: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
}
/**chatgpt way
     printf("Reverse order: ");
    for(i = n; i >= 0; i--) {
        printf("%d ", arr[i]);
    }**/


