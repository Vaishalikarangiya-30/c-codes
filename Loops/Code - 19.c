#include<stdio.h>
#include<conio.h>

int main()
{
    int i,num,remainder,reversed=0;
    
    printf("Enter the number: ");
    scanf("%d",&num);
    
    while(num!=0)
    {
        remainder=num%10;
        reversed= reversed*10+remainder;
        num=num/10;
    }
    printf("Reversed number is: %d",reversed);
    
    return 0;
    
   
}