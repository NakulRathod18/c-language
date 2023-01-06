#include<stdio.h>
void main()
{
    int i,j;
    char a;
    printf("Enter your char : ");
    scanf("%c",&a);
    i=1;
    do
    {
        j=1;
        do
        {
           // if(i==1 || i==5 ||i==3)              
            if(j==1 || j==3 || j==5)
            {
                printf(" %c",a);
            }
            else if(a<'Z' && a>'A')
            {
                printf(" %c",a+32);
            }
            else if(a<'z' && a>'a')
            {
                printf(" %c",a-32);
            }
            a++;
            j++;
        }while(j<=i);
        printf("\n");
        i++;
    }while(i<=5);
}