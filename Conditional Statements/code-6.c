#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    
    if(num>0)
    {
        printf("%d Number is positive.",num);
    }
    else if(num<0)
    {
        printf("%d Number is nagative.",num);
    }
    else
    {
        printf("%d Number is zero.",num);
    }
    return 0;
}