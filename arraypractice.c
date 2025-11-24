#include<stdio.h>
int main()
{
    int arr[5+1], arr1[5];
    int sum=0, mul=1;
    int count=0;
    int search,found=0, position=0;
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
        sum= sum +arr[i];
        mul= mul * arr[i];
        if(arr[i]>max) max= arr[i];
        if(arr[i]<min) min= arr[i];
    }
    printf("\n%d %d %d %d\n", sum, mul, max, min);
    for(int i=5-1; i>=0; i--)
    {
        printf(" %d", arr[i]);
    }
    printf("\nodd elements:");
    for(int i=0; i<5; i++)
    {
        if(arr[i]%2!=0){
            printf("%d ", arr[i]);
            count++;
        }
    }
    printf("\n%d",count);
    printf("\nthe value you want to search:");
    scanf("%d",&search);
    for(int i=0; i<5; i++)
    {
        if(arr[i]==search){
            found=1;
            position= i+1;
            break;
        }
    }
    if(found==1) printf(" value found, position %d", position);
    else printf(" value not found");
    int newvalue, index;
    printf("\n value and index:");
    scanf("%d %d",&newvalue, &index);
    for(int i=5; i>index; i--)
    {
        arr[i]= arr[i-1];
    }
    arr[index]=newvalue;
    printf("after adding:");
    for(int i=0; i<=5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n sorting:");
    int j;
        for(int i=0; i<6-1; i++){
        for(int j=0; j<6-i-1; j++){
         if(arr[j]< arr[j+1])
         {
             int temp= arr[j];
             arr[j]= arr[j+1];
             arr[j+1]= temp;
         }
        }
    }
    printf("\nsorted array:");
    for(int i=0; i<6; i++){
        printf(" %d", arr[i]);
    }

}
