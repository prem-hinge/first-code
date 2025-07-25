#include <stdio.h>
struct student 
{
    int rollno;
    char name[10];
} ;
int main()
{
    // int n;
    // printf("Enter no of student in class: ");
    // scanf("%d",&n);
    // struct student std[n];
    struct student std[2];
    for(int i=1;i<=n;i++)
    {
        printf("Enter rollno for student %d: ",i);
        scanf("%d",&std[i].rollno);
        printf("Enter name of the student: ");
        scanf("%s",std[i].name);
    }
    for(int j=1;j<=n;j++)
    {
        printf("Student %d details: \n",j);
        printf("Name = %s\n",std[j].name);
        printf("Roll No = %d\n",std[j].rollno);
    }
    return 0;
}