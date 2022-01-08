// To draw Pattern ****
                   ****
                   ****
                   ****
           

#include <stdio.h>
int main()
{
    int i,j,num;
    printf("enter the number");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
