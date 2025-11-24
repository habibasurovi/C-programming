#include<stdio.h>
int main()
{
    int l1, l2, l3, b1, b2, b3;
    scanf("%d %d %d %d %d %d", &l1,&b1,&l2,&b2,&l3,&b3);
    if(1<=l3&& l3<=l2&& l2<=l1&& l1<=100 && 1<=b3&&b3<=b2&&b2<=b1&&b1<=100)
    {

        if(l1+l2+l3==b1 && b1==b2 && b2==b3)
        {
            printf("yes");
        }
        else if(b1+b2+b3==l1 && l1==l2 && l2==l3)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
        return 0;
    }
    else
    {
        printf("no");
    }
}
