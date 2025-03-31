#include <stdio.h>
int main()
{
    int arr[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        printf("Value of a[%d] =%d\n",i,arr[i]);
        printf("Address of a[%d] = %d\n",i,&arr[i]);
    }
    return 0;
}