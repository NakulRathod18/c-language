#include<stdio.h>
void main()
{
    int i,j;
    i=5;
    do
    {
        j=i;
        do
        {
            printf(" %d",i);
            j++;
        }while(j<=5);
        printf("\n");
        i--;
    }while(i>=1);
}