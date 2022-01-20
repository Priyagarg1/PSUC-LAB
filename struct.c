
#include <stdio.h>
struct student
    {
        char name[20];
        int marks;
    };

int main()
{
    struct student s;
    {
        int T,add,i;
        printf("Enter the number of students");
        scanf("%d",&T);
        while(T--)
        {
        int num,i,add=0;
        printf("Enter the name of student");
        scanf("%s",s.name);
        printf("Enter the total number of subjects");
        scanf("%d",&num);
        for(i=1;i<=num;i++)
        {
        printf("Enter the student marks");
        scanf("%d",&s.marks);
        add=add+s.marks;
        }
        printf("name of student%s,total marks %d\n",s.name,add);
        
        }
    }

    return 0;
}
