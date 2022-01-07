//Transpose of a matrix Print original matrix and transpose of a matrix
#include<stdio.h>
int main()
{
    int a[5][5],i,j,r,c,temp=0;
    printf("Enter the number of the rows in a matrix");
    scanf("%d",&r);
    printf("enter the number of columns in c");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the elements");
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<i;j++)
        {
            if(i!=j)
            {
                temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
return 0;
}
