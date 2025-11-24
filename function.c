#include<stdio.h>
#include<string.h>
int length(char str[])
{
    int len= strlen(str);
    printf("the string is: %s",str);
    return len;
}
void comparison(char str1[],char str2[])
{
    int a=1;
    for(int i=0; str1[i]!='\0';i++)
    {
       if(str1[i]!=str2[i])
       {
           a=0;
           break;
       }
    }
    if(a==1) printf("\n%s and %s are same", str1,str2);
    else printf("\n%s and %s are not same",str1,str2);
}
void concate(char str1[],char str2[])
{
    char res[200];
    strcpy(res,str1);
    strcat(res,str2);
    printf("\nthe string: %s",res);
}
void reverse(char str1[], char res[])
{
    int temp;
    strcpy(res,str1);
    int len=strlen(str1);
    for(int i=0;i<len/2;i++)
    {
        temp=res[i];
        res[i]=res[len-1-i];
        res[len-i-1]=temp;
    }
    printf("\nreversed string: %s",res);

}
int main()
{
    char str[100], str1[100],rev[100];
    printf("Enter the 1st string: ");
    gets(str);
    printf("Enter the 2nd string: ");
    gets(str1);
    printf("Here the strings: ");
    puts(str);
    puts(str1);
    int len = strlen(str);
    printf("\nLength of the '%s' string: %d",str,len);
    int leng;
    for(int i=0; str[i]!='\0';i++) leng++;
    printf("\nLength of the '%s' string: %d\n",str,leng);
    printf("\n%d", length(str));
    comparison(str,str1);
    concate(str,str1);
    reverse(str1,rev);


}


