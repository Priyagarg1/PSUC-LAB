#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,choice;
    printf("MENU");
    printf("1.Addition");
    printf("\n2.Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Exit");
    printf("Enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter two numbers");
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("Addition of two numbers is %d",c);
        break;
        case 2:
        printf("Enter two numbers");
        scanf("%d %d",&a,&b);
        c=a-b;
        printf("Subtraction of two numbers is %d",c);
        break;
        case 3:
        printf("Enter two numbers");
        scanf("%d %d",&a,&b);
        c=a*b;
        printf("Multiplication of two number is %d",c);
        break;
        case 4:
        printf("Enter two numbers");
        scanf("%d %d",&a,&b);
        c=a/b;
        printf("Division of two number is %d",c);
        break;
        case 5:
        exit(0);
        default:
        printf("Incorrect Choice");
    }

    return 0;
}
