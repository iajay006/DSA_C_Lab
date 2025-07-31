// Function having no arguments but a return type

#include <stdio.h>
#include <conio.h>

int isPalindrome();

int main()
{
    int result;
    clrscr();
    result = isPalindrome();

    if (result)
        printf("It is a Palindrome\n");
    else
        printf("It is not a Palindrome\n");

    getch();
    return 0;
}

int isPalindrome()
{
    int num, rev = 0, rem, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;

    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    return (n == rev);
}