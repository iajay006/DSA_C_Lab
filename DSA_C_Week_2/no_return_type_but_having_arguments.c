// Function having no return type but having arguments

#include <stdio.h>
#include <conio.h>

void isPalindrome(int num);

int main()
{
    int number;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &number);
    isPalindrome(number);
    getch();
    return 0;
}

void isPalindrome(int n)
{
    int num = n, rev = 0, rem;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (n == rev)
        printf("%d is a Palindrome\n", n);
    else
        printf("%d is NOT a Palindrome\n", n);
}