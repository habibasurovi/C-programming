#include<stdio.h>
int main()
{
    int row, col,evenc=0,oddc=0;
    printf("Enter row and column: ");
    scanf("%d %d",&row, &col);
    int arr[row][col],odd[row*col],even[row*col];

    printf("Enter the elements of array: ");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
            scanf("%d",&arr[i][j]);
    }

    printf("Elements of array:\n");
    for(int i=0; i<row; i++)
    {
        printf("%d row:",i+1);
        for(int j=0; j<col;j++)
        {
            printf("%d ",arr[i][j]);
            if(arr[i][j]%2==0)
                even[evenc++]=arr[i][j];
            else
                odd[oddc++]=arr[i][j];
        }
        printf("\n");
    }
    printf("row wise sum:\n");
    int sum=0, sum1;
    for(int i=0; i<row; i++)
    {
        sum1=0;
        for(int j=0; j<col; j++)
            {
            sum1+= arr[i][j];
            sum+= arr[i][j];
            }
        printf("%d row: %d\n",i+1,sum1);
    }
    printf("sum of whole array: %d\n", sum);

    printf("column wise sum:\n");
    sum=0;
    for(int j=0; j<col; j++)
    {
        sum1=0;
        for(int i=0; i<row; i++)
        {
            sum1+=arr[i][j];
            sum+=arr[i][j];
        }
        printf("%d column: %d\n",j+1,sum1);
    }
    printf("sum of whole array: %d\n", sum);

    printf("the array of odd numbers: ");
    for(int i=0; i<oddc;i++)
        printf("%d ",odd[i]);

    printf("\nthe array of odd numbers: ");
    for(int i=0; i<evenc;i++)
        printf("%d ",even[i]);

    printf("\nTranspose of array: \n");
    int trans[col][row];
    for(int i=0; i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            trans[j][i]= arr[i][j];
        }
    }
    for(int i=0; i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
}

