#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is greater");
    }
    else if(b>c)
    {
        printf("b s greater");
    }
    else
    {
        printf("c is greater");
    }
    return 0;
}
