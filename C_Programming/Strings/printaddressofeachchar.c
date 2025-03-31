#include <stdio.h>
int main()
{
    char str[ ]  = "PREM";
    for(int i=0;str[i]!='\0';i++)
    {
        printf("Character = %c\n",str[i]);
        printf("Address = %d\n",&str[i]);
    }
    return 0;
}