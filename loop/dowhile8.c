#include<stdio.h>
void main()
{
    int i,j,a;
    printf("Enter your number  : ");
    scanf("%d",&a);
    i=1;
    do
    {
        j=1;
        do
        {
            printf(" %d",a);
            a++;
            j++;
        }while(j<=i);
        printf("\n");
        i++;
    }while(i<=5);
}