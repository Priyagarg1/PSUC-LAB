Addition of two matrix
#include <stdio.h>

int main()
{
    int i,a[5][5],j,r1,c1,r2,c2,b[5][5],c[5][5];
    printf("enter the number of rows of first matrix");
    scanf("%d",&r1);
    printf("enter the number of columns of first matrix");
    scanf("%d",&c1);
     printf("enter the number of rows of second matrix");
    scanf("%d",&r2);
    printf("enter the number of columns of second matrix");
    scanf("%d",&c2);
    if(r1==r2 && c1==c2)
    {
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
           printf("Enter the elements");
           scanf("%d",&a[i][j]);
    }
    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
           printf("Enter the elements");
           scanf("%d",&a[i][j]);
    }
    }
  /*  for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            c[i][j]=0;
           c[i][j]=a[i][j]+b[i][j];
    }
    }*/
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            c[i][j]=0;
            c[i][j]=a[i][j]+b[i][j];
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
}
else
{
    printf("Addition of these two matrix is not possible as the number of rows and columns are not equal");
}
    return 0;
}
