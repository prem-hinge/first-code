#include <stdio.h>
#include <string.h> // has all function of string.
int main()
{
    //char a[10]="Program";
    char name[10];
    printf("Enter name: ");
    scanf("%s",name);
    printf("Length of the string a = %d\n",strlen(name)); //strlen(a).
    return 0;
}