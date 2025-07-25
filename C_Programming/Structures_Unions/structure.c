#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
} ;
int main()
{
    struct student std;
    printf("Enter student rollno: ");
    scanf("%d",&std.rollno);
    printf("Enter you name: ");
    scanf("%s",std.name);
    printf("Student information: \n");
    printf("Student rollno: %d\n",std.rollno);
    printf("Student name: %s\n",std.name);
    return 0;
}