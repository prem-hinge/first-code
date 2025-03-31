#include <stdio.h>
main()
{
    int *max(int *p,int *q);
    int a , b , *m;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    m = max(&a,&b);
    printf("maximum = %d",*m);
}
int *max(int *p,int *q)
{
    if(*p > *q)
    return p;
    else
    return q;
}