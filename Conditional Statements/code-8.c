#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    
    if((year%4==0 && year%100!=0)||(year%400==0))
    {
        printf("%d year is leap year.",year);
    }
    else
    {
        printf("%d year is not leap year.",year);
    }
}