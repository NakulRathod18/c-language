#include<stdio.h>
void main()
{
    int i,j;
    char a;
    printf("Enter your char : ");
    scanf("%c",&a);
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
           if(i==1 || i==3 || i==5)   
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
        }
        printf("\n");
        i++;
    }
 
    
}