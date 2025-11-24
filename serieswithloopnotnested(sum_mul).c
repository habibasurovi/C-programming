#include<stdio.h>
int main()
{
    int i, j, n, sum=1, mul;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
         if(i==1)
                printf("1");
        else
            mul=1;
            printf(" + ");
        for(j=1; j<=3; j++)
        {
                printf("%d",i*j);
                mul=mul*i*j;
            if(j<3)
            printf("*");

        }

         sum = sum+mul;
    }
    printf(" = ");
    printf("%d",sum);

}
/** chatgpt #include <stdio.h>

int main()
{
    int i, j, n;
    long long sum = 0, mul;

    scanf("%d", &n);

    printf("Series: ");

    for(i = 1; i <= n; i++)
    {
        if(i == 1)
        {
            printf("1");
            sum += 1;
        }
        else
        {
            mul = 1;
            printf(" + ");
            for(j = 1; j <= 3; j++)
            {
                int val = i * j;
                mul *= val;
                printf("%d", val);
                if(j < 3)
                    printf("*");
            }
            sum += mul;
        }
    }

    printf(" = %lld\n", sum);

    return 0;
} **/

/** hudai check korsi namta
#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d",&n);
    for(i = 1; i <= 10; i++) //row bujhay,upor theke niche change hoy
    {
        for(j = 1; j <= n; j++) //column bujhay, left to right change hoy
        {
            printf("%2d x%2d =%2d  ", j, i, i*j);

        }
         printf("\n");
    }
} **/
