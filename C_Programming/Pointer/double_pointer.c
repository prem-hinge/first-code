#include <stdio.h>
int main()
{
    int f = 1;
    int* ptr1;
    int** ptr2;
    ptr1 = &f;
    ptr2 = &ptr1;
    printf("Value of f: %d\n",f);
    printf("Address of f: %d\n",&f);
    printf("Value of f using single pointer: %d\n",*ptr1);
    printf("Value of f using double pointerL %d\n",**ptr2);
    printf("Address at ptr1: %d\n",ptr1);
    return 0;   
}