#include<stdio.h>
void main()
{
    int i;
    for (i='A' ; i <='Z'; i++)
    {
        printf("%c --> %d  ||  %c --> %d \n",i,i,i+32,i+32);
    }
}
