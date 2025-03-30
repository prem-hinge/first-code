#include <stdio.h>
int main()
{
    int a = 20;
    int* ptr;
    ptr = &a;
    printf("Address of a variable: %d\n",&a);
    printf("Address stored in ptr variable: %d\n",ptr);
    printf("Value of ptr variable: %d\n",*ptr);
    return 0;
}