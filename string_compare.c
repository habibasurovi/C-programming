#include<stdio.h>
#include<string.h>
int main()
{
    int flag=1;
    char str1[20], str2[20];
    printf("input string: ");
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    int len1= strlen(str1);
    int len2= strlen(str2);
    int i=0;
    if(len1==len2)
    {
        while(str1[i]!='\0'&&str2[i]!='\0')
        {
            if(str1[i]!=str2[i])
            {
                flag =0;
                break;
            }
            i++;
        }
    }
    else flag=0;
    if(flag) printf("equal");
    else printf("not equal");


}

