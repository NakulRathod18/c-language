#include<stdio.h>
void main()
{
    int i,j;
    i='A';
    do
    {
        j='A';
        do
        {
            printf(" %c",j);
            j++;
        } while (j<=i);
        printf("\n");
        i++;
    }while(i<='E'); 
}