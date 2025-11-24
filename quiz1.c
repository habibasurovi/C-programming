#include<stdio.h>
int ShowValue(int a,int b)
{
    if(a!=0)
    {
        return 1;
    }
    else if(b!=0)
    {
        return 1;
    }
    else if(a==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    printf("%d", ShowValue(x,y));

}
