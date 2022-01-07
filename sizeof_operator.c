//To check size od data types using size_of operator
#include<stdio.h>
int main()
{
    int a,x,y,w,z;
    float b;
    char ch;
    double d;
    x=sizeof(a);
    printf("%d",x);
    y=sizeof(b);
    printf("\n%d",y);
    w=sizeof(ch);
    printf("\n%d",w);
    z=sizeof(d);
    printf("\n%d",z);
    return 0;
}
