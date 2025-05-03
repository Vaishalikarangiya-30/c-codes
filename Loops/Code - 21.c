#include<stdio.h>
#include<conio.h>

int main()
{
    int num,remainder,original,result=0;
    
    printf("Enter the number: ");
    scanf("%d",&num);
    
    original=num;
    
    while(num!=0)
    {
        remainder=num%10;
        result=result+remainder*remainder*remainder;
        num=num/10;
    }
    
    if(result==original)
    {
        printf("%d is Armstrong number.",original);
    }
    else
    {
        printf("%d is not Armstrong number.",original);
    }
    
    return 0;
}
