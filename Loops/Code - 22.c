#include<stdio.h>
#include<conio.h>

int main() 
{
    int num, reversed = 0, digit;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    // Reverse the number
    while (temp != 0) {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp = temp / 10;
    }

    // Print digits from left to right
    printf("Digits (left to right):\n");
    while (reversed != 0) {
        digit = reversed % 10;
        printf("%d\n", digit);
        reversed = reversed / 10;
    }

    return 0;
}
