#include<stdio.h>
#include<conio.h>

int main()
{
    int n,reverse=0,original,remainder;
    
    
    printf("Enter the number: ");
    scanf("%d",&n);
    original=n;
    
    while(n!=0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    
    if(original==reverse)
    {
        printf("%d is palindrom number.",original);
    }
    else
    {
        printf("%d is not palindrom number.",original);
        
    }
    
    return 0;
}
