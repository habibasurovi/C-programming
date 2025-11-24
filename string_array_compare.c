#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20];
    char str1[5][20]={
    "fahad",
    "rahad",
    "sahad",
    "arad",
    "toriq"
    };
    for(int i=0;i<5;i++)
    {
        printf("\nEnter %d animal name:", i+1);

            fgets(str[i], sizeof(str[i]), stdin);

    }
    char find[20];
    printf("\nenter your brother name:");
    fgets(find,sizeof(find),stdin);
    for(int i=0; i<5;i++)
    {
        if(!strcmp(find,str1[i]))
        {
            printf("found");
            printf("\nthis animal %s goes to %s",str[i],str1[i]);
            printf("\ntherefore %s",strcat(str1[i],str[i]));
            return 0;

        }
    }
    printf("not found");
}
