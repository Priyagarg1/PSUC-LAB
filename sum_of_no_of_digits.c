//to calculate sum of n number of digits
#include<stdio.h>
int main()
{
    int num,rem,temp,sum=0,i;
    printf("enter the number");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    printf("%d",sum);
return 0;
}
