#include <stdio.h>
const int MAX = 3;
int main()
{
    int var[] = {1,2,3,4};
    int i,*ptr;
    ptr = var;
    for(i = 0;i < MAX;i++)
    {
        printf("Address of var[%d] = %d\n",i,ptr);
        printf("Value of var[%d] = %d\n",i,*ptr);
        ptr++;
    }
    return 0;
}