#include <stdio.h>
int main()
{
    int* pc,p;
    p  =  14;
    printf("Address of p: %d\n",&p);
    printf("Value of p : %d\n",p);
    pc = &p;
    printf("Address of pointer pc: %d\n",pc);
    printf("Content of pointer pc: %d\n",*pc);
    p = 38;
    printf("Address of pointer pc: %d\n",pc);
    printf("Content of pointer pc: %d\n",*pc);
    *pc = 12;
    printf("Address of p: %d\n",&p);
    printf("Value of c: %d\n",p);
    return 0;
}