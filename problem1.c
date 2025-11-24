#include<stdio.h>
int iseven(int num)
{
    if(num%2==0)
    {
        return 1;

    }
    else
    {
        return 0;
    }
}
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if(iseven(x))
    {
        printf("even");

    }
    else
    {
        printf("odd");

    }
}
