#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    
    printf("Enter the alphabet: ");
    scanf("%c",&ch);
    
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("alphabet is vowel");
            break;
        
        default:
          if(ch>='a' && ch<='z')
            printf("alphabet is consonant");
            
            else
            printf("alphabet is not character");
    }
}