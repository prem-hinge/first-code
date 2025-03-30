#include <stdio.h>
const int MAX = 5;
int main()
{
    int arr[] = {1,2,3,4,5};
    int i,*ptr;
    ptr = &arr[MAX-1];
    for(i=MAX;i>0;i--)
    {
        printf("Address of arr[%d] = %d\n",i-1,ptr);
        printf("Value of arr[%d] = %d\n",i-1,*ptr);
        ptr--;
    }
    return 0;
}