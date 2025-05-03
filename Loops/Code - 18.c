#include<stdio.h>
#include<conio.h>

int main()
{
    int factorial=1,i,n;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    
    if(n<0)
    {
        printf("\n factorial is not defined for the negative numbers.");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            factorial*=i;
        }
        
        printf("\n Factorial is: %d",factorial);
    }
   
}