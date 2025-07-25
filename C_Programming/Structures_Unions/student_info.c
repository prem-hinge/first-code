#include <stdio.h>
struct subject
{
    char sname[10];
    int marks;
} ;
struct student
{
    int rollno;
    char name[10];
    struct subject s;
} ;
int main()
{
    struct student std;
    printf("Enter you rollno: ");
    scanf("%d",&std.rollno);
    printf("Enter you name: ");
    scanf("%s",std.name);
    printf("Enter you subject name: ");
    scanf("%s",std.s.sname);
    printf("Enter Your mark's : ");
    scanf("%d",&std.s.marks);
    printf("STUDENT INFORMATION: \n");
    printf("Student Rollno : %d\n",std.rollno);
    printf("Student Name : %s\n",std.name);
    printf("Student Subject: %s\n",std.s.sname);
    printf("Student Marks: %d\n",std.s.marks);   
    return 0;   
}

