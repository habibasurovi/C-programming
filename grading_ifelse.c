#include<stdio.h>
int main()
{
    int mark;
    scanf("%d",&mark);
    if(mark<=100&&mark>=0)
    {
        if(mark>=90)
        {
            printf("A+");
        }
        else if(mark>=80)
        {
            printf("A");
        }
        else if(mark>=70)
        {
            printf("B");
        }
        else if(mark>=60)
        {
            printf("C");
        }
        else if(mark>=50)
        {
            printf("D");
        }
        else
        {
            printf("F");
        }
    }
    else
    {
        printf("invalid number");
    }
}
