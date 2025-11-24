#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Series: ");

    for(int i = 1; i <= n; i++)
    {
        if(i==1)
        {
            sum=1;
            printf("1");
        }

        else
        {
            sum= sum + i* 2*i *3*i;
            printf(" + %d*%d*%d", i,2*i,3*i );
        }
    }
    printf(" = %d", sum);
}
