#include <stdio.h>

int main()
{
    int i, j,n;
    scanf("%d", &n);
    int size= 2*n-1;
    for(i=1; i<=size; i++)
    {
        for(j=1; j<=size; j++)
        {
            int top= i-1;
            int left= j-1;
            int bottom= size-i;
            int right= size-j;
            int min= top;
            if(min>left) min=left;
            if(min>bottom) min=bottom;
            if(min>right) min=right;
            printf("%d ",n-min);
        }
        printf("\n");
    }
}
