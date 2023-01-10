#include<stdio.h>
void main()
{
    int i,j;
    i='E';
    while(i>='A')
    {
        j=i;
        while(j<='E')
        {
            printf(" %c",j);
            j++;
        }
        printf("\n");
        i--;
    }
}