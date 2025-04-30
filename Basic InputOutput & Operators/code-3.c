#include<stdio.h>
#include<conio.h>

/*swaping with third variable*/


// int main()
// {
//   int a=4,b=5,c;
  
//  c=a;
//  a=b;
//  b=c;
 
//  printf("a=%d,b=%d",a,b);
  
// }

/* swap without thrid variable*/

int main()
{
    int a=4,b=5;
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("a=%d,b=%d",a,b);
}