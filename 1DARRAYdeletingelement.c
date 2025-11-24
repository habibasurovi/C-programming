/**#include<stdio.h>
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
    //shifting:left shift
    // shift: index to size-1
    // aar[i]= arr[i+1]
    // loop i: 0 to size-1
     int index;
    printf("Enter the index: ");
    scanf("%d", &index); //to add the value at any index
    for(i=index; i<n-1; i++)
    {
        arr[i]=arr[i++];
    }
    printf("\nAfter deleting: ");
    for(i=0; i<n-1;i++)
    {
        printf("%d ", arr[i]);
    }

}**/
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
    int index;
    printf("Enter the index to delete: ");
    scanf("%d", &index);

    for(i=index; i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("\nAfter deleting: ");
    for(i=0;i<n-1;i++)
    {
        printf("%d ", arr[i]);
    }
}
