#include<stdio.h>
void main()
{
    int i,j,a=0;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            printf(" %d",(a++)%2==0); 
            j++;
        }
        printf("\n");
        i++;
    }
}