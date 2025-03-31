#include <stdio.h>
int main()
{
    char sname[10];
    printf("Enter you name: ");
    scanf("%s",sname);  // from space data is not taken 
    printf("Your name is: %s",sname);
    return 0;
}