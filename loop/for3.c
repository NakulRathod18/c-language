#include<stdio.h>
void main()
{
    int i,a=0,b=0,n=0;
    for ( i=1; i<=10; i++)
    {
        n+=i;
        printf(" %d\n",i);
        if(i%2==0)
        {
            a+=i;
         
        }
        else if(i%2==1)
        {
            b+=i;
           
        }     
    }
    printf("\n total = %d",n);
    printf("\n even = %d",a);
    printf("\n odd = %d",b);
    
    
} 
