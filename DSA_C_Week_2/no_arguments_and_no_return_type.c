// Function having no arguments and no return type

#include <stdio.h>
#include <conio.h>

void isPalindrome();

int main()
{
    clrscr();
    isPalindrome();
    getch();
    return 0;
}

void isPalindrome()
{
    int n, num, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;

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