#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,d;
    printf("enter the number:");
    scanf("%d%d",&a,&b);
    
    c=a%b;
    printf("remainder is:%d",c);
    
    d=a/b;
    printf("\nquotient is:%d",d);
    
    
}