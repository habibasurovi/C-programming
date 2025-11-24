#include<stdio.h>
int fact(int n)
{
    if(n==0||n==1) return 1;
    else
        return n* fact(n-1);
}
int fibo(int a)
{
    if(a==0) return 0;
    if(a==1) return 1;
    else{
        return fibo(a-1)+fibo(a-2);
    }
}
int fiboshow(int n, int i)
{
    if(n==i) return 0;
    int f= fibo(i);
    printf("%d ",f);
    return f + fiboshow(n,i+1);
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("fact of %d is %d\n",a,fact(a));
    printf("\nsum of fibonacci series %d",fiboshow(a,0));
}
