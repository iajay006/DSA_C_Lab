// Function having both argument and return type

#include <stdio.h>
#include <conio.h>

int isPalindrome(int num);

int main()
{
    int number;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("It is a Palindrome\n");
    else
        printf("It is not a Palindrome\n");

    getch();
    return 0;
}

int isPalindrome(int n)
{
    int num = n, rev = 0, rem;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    return (n == rev);
}