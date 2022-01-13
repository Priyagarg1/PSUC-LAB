#include <stdio.h>
#include<string.h>
int main()
{
     char str1[20],str2[20];
     void stringcopy(char[],char[]);
     printf("enter the string");
     scanf("%s",str1);
     stringcopy(str1,str2);
     printf("Original string is %s\n",str1);
     printf("Copy string is %s",str2);
     return 0;
}
void stringcopy(char str1[],char str2[])
{
    int i;
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
}
