#include<stdio.h>
#include<conio.h>
void main()
{

  /*  int a,b,c,z;
    printf("THIS PROGRAM IS QESTION 6.");
    printf("\nEnter number a : ");
    scanf("%d",&a);
    printf("\nEnter number b : ");
    scanf("%d",&b);
    z=a*b;
    c=a+b;
    if(z%c==0)
    {
        printf("\nthis value %d is divisible by its addition value %d",z,c);
    }
    else
    {
        printf("\nthis value %d is not divisible by its addition value %d",z,c);
    }
  */   

    int m,s;

    printf("\n enter maths marks :");
    scanf("%d",&m);
    printf("\n enter science marks :");
    scanf("%d",&s);
    if(m>=33 && s<=32)
    {
        printf("you are pass maths but not science so you are resived gift rupees 15..!!");
    }
    else if(s>=33 && m<=32)
    {
        printf("you are pass science but not maths so you are resived gift rupees 15..!!");
    }
    else if(s>=33 && m>=33)
    {
        printf("you are pass both subject so you resived gift ruppes 45..!!");
    }
    else
    {
        printf("you are fail both subject try again..");
    }
}