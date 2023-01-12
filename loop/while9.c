#include<stdio.h>
void main()
{
     char i,j,a;
    printf("Enter your char : ");
    scanf(" %c",&a);
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            printf(" %c",a);
            a++;
            j++;
        }
        printf("\n");
        i++; 
    }
}