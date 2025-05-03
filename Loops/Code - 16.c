#include<stdio.h>
#include<conio.h>

int main()
{
    int i=1,n;
    
    printf("Enter the number:");
    scanf("%d",&n);
    
    do{
        printf("\n%d",i);
        i++;
    }while(i<=n);
    
    return 0;
}