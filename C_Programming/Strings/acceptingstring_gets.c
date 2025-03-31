#include <stdio.h>
int main()
{
    char sname[10];
    printf("Enter you name: ");
    //puts("Enter you name: "); //can use puts (put string)
    gets(sname); // in this all input is taken (from space also). (get string)
    printf("Your name is: %s",sname);
    return 0;
}