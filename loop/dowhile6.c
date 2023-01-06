#include<stdio.h>
void main()
{
    int i,j;
    
    i='E';
    do
    {
        j=i;
        do
        {
            printf(" %c",j);
            j++;
        }while(j<='E');
        printf("\n");
        i--;
    }while(i>='A');
}