#include <stdio.h>

int main()
{
    int arr[100];
    int num,max,i;
    printf("Enter the number of elements of array");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
    max=arr[0];
    if(arr[i]>arr[0])
    {
        max=arr[i];
    }
    }
    printf("%d",max);
}
