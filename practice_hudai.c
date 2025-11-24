#include <stdio.h>
#include <string.h>
void rev(char *str,int len)
{
  for(int i=0;i<len/2 ;i++)
  {
      int temp=str[i];
      str[i]=str[len-i-1];
      str[len-i-1]=temp;
  }
}
void pallindrome(char *str1, char *str2)
{
   int flag=1;
   for(int i=0; str1[i]!='\0'&&str2[i]!='\0'; i++)
   {
       if(str1[i]!=str2[i])
       {
           flag=0;
           break;
       }
   }
   if(flag) printf("pallindrome");
   else printf(" not pallindrome");
}
int main()
{
    char str1[]="madam";
    char str2[50];
    strcpy(str2,str1);
    int len=strlen(str1);
    rev(str2,len);
    pallindrome(str2,str1);
}
