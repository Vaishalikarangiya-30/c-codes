#include<stdio.h>
#include<conio.h>

int main()
{
    int i, num;
    printf("Enter the number: ");
    scanf("%d",&num);
    
    printf("\n Multiplication table of: %d",num);
    
    for(i=1;i<=10;i++)
    {
        printf("\n %d * %d = %d",num,i,num*i);
    }
    return 0;
}