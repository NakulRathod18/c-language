#include<stdio.h>
void  main()
{
     int i,j,a;
    printf("Enter your number  : ");
    scanf("%d",&a);
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            printf(" %d",a);
            a++;
            j++;
        }
        printf("\n");
        i++;
    }
}