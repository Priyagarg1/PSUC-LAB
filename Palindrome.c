//To check Palindrome Number
#include<stdio.h>
int main()
{
    int num,rem,temp,rev=0,i;
    printf("enter the number");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(num==rev)
    {
        printf("given number is palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
return 0;
}
