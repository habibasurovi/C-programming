#include<stdio.h>
int main()
{
    int n,way,rot;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements of array:");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nEnter the rotation: ");
    scanf("%d",&rot);
    rot= rot%n;
    //to AVOID unnecessary rotation. if rot=12, n=5
    //then rot=12%5=2, rotating 12 times is equivalent to rotating 2 times
    printf("press-\n 1 for left rotation\n 2 for right rotation:");
    scanf("%d",&way);
    int temp[rot];
    if(way==1) //left rotating
    {
        for(int i=0; i<rot; i++)
        {
            temp[i]=arr[i]; //storing the the value that will be rotated
        }
        for(int i=0; i<n-rot; i++)
        {
            arr[i]=arr[i+rot]; //shifting the others value to left
        }
        for(int i=0; i<rot; i++)
        {
            arr[n-rot+i]=temp[i]; //adding the stored value at the end
        }
        printf("\nThe array after rotation: ");
        for(int i=0; i<n; i++)
        {
            printf("%d ",arr[i]);
        }
    }
    else if(way==2) //right shifting
    {
        for(int i=0; i<rot;i++)
        {
            temp[i]=arr[n-rot+i]; //storing the rotated values
        }
        for(int i=n-1;i>=rot;i--)
        {
            arr[i]=arr[i-rot]; //right shifting
        }
        for(int i=0;i<rot;i++)
        {
            arr[i]=temp[i];
        }
        printf("\nThe array after rotation: ");
        for(int i=0; i<n; i++)
        {
            printf("%d ",arr[i]); //adding the stored value in the first
        }
    }
    else
    {
        printf("\nInvalid option!");
    }


}
