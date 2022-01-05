#include <stdio.h>
int main()
{
    int n;
    int is_prime(int );
    is_prime(n);
    return 0;
}
  is_prime(int x)
  {
    int i,flag=0;
    printf("Enter the number");
    scanf("%d",&x);
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
   }
