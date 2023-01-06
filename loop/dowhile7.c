#include<stdio.h>
void main()
{
    int i,j;
    i=1;
    int a=0;
    do
    {
        j=1;
        do
        {
            printf(" %d",(a++)%2==0);
            j++;
        }while(j<=i);
        printf("\n");
        i++;
    }while(i<=5); 
}