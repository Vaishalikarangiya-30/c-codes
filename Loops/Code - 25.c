#include<stdio.h>
#include<conio.h>

int main()
{
    int gcd,lcm,a,b,temp,num1,num2;
    printf("Enter the number: ");
    scanf("%d %d",&num1,&num2);

    a=num1;
    b=num2;
    
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    gcd=a;
    
    lcm = (num1 * num2) / gcd;

    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}