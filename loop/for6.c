#include<stdio.h>
void main()
{
    int a;
    for(int i=2;i<=10;i++)
    {
        if(i%2==0)
        {
        for(int j=1;j<=5;j++)
          {
            printf("%d ",i);
          }  
        }
        printf("\n");
    }
}