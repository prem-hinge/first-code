#include <stdio.h>
int main()
{
    int number=50;
    int* p;
    p = &number;
    printf("Address of p variable is:%d\n",p);
    p=p+3;
    printf("After adding 3: address of p variable is: %d\n",p);
    return 0;
}