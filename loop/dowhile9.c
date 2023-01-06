#include<stdio.h>
void main()
{
    char i,j,a;
    printf("enter character : ");
    scanf("%c",&a);
    i=1;
    do
    {
        j=1;
        do
        {
            printf(" %c",a);
            a++;
            j++;
        }while(j<=i);
        printf("\n");
        i++;
    }while(i<=5);
}