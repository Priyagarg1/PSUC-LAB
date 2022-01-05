#include <stdio.h>
int main()
{
    int num,a[30],i,found,flag=0;
    printf("Enter the number of elements");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("Enter the elements");
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be found");
    scanf("%d",&found);
    for(i=0;i<num;i++)
    {
        if(found==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%dFound at %d",found,i);
    }
    else
    {
        printf("Not found");
    }
    return 0;
}
    
    
