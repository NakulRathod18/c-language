#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter your number : ");
    scanf("%d",&n);
    for(i=n;i>=-n;i--)
    {
        printf("%d ",i);
    }
}