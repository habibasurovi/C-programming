#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter array size:");
    scanf("%d", &n);
    int arr[n+1]; //because we'll add one more element later
    //we keep the array size bigger
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
     int index, value;
    printf("Enter the index: ");
    scanf("%d", &index); //to add the value at any index

    printf("Enter the  new element: ");
    scanf("%d", &value);
     //right shift to make space for new value
     //index number increases
     //it's done reversely
    for(i=n; i>index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=value; //value is assigned to desired index



/**
    //gets added at the last
     printf("\nEnter the  new element: ");
    scanf("%d", &arr[n]);
**/

    printf("after adding the elements: ");
    for(i=0; i<=n; i++)
    {
        printf("%d ", arr[i]);
    }

}
