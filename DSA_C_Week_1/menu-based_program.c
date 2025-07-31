// Design a menu-based program in which you have to design 5 cases are:
// Case 1 : Prime Number
// Case 2 : Armstrong Number
// Case 3 : Fibonacci Series
// Case 4 : Number Reverse
// Case 5 : X^Y without using power function

// Using function and switch case

#include <stdio.h>
#include <conio.h>// Design a menu-based program in which you have to design 5 cases are:
// Case 1 : Prime Number
// Case 2 : Armstrong Number
// Case 3 : Fibonacci Series
// Case 4 : Number Reverse
// Case 5 : X^Y without using power function

// Using function and switch case

#include <stdio.h>
#include <conio.h>

int isPrime(int);
int isArmstrong(int);
void fibonacci(int);
int reverse(int);
int power(int, int);

int main()
{
    int choice, num, terms, base, exponent;
    clrscr();

    printf("1 : Prime Number\n");
    printf("2 : Check Armstrong Number\n");
    printf("3 : Fibonacci Series\n");
    printf("4 : Reverse a Number\n");
    printf("5 : Calculate x to the power y (x^y)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isPrime(num))
                printf("%d is a Prime Number.\n", num);
            else
                printf("%d is NOT a Prime Number.\n", num);
            break;

        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isArmstrong(num))
                printf("%d is an Armstrong Number.\n", num);
            else
                printf("%d is not an Armstrong Number.\n", num);
            break;

        case 3:
            printf("Enter number of terms: ");
            scanf("%d", &terms);
            fibonacci(terms);
            break;

        case 4:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Reversed Number: %d\n", reverse(num));
            break;

        case 5:
            printf("Enter base (x): ");
            scanf("%d", &base);
            printf("Enter exponent (y): ");
            scanf("%d", &exponent);
            printf("Result: %d\n", power(base, exponent));
            break;

        default:
            printf("Invalid Choice! Try again.\n");
    }

    getch();
    return 0;
}

int isPrime(int num)
{
    int count = 0,i;
    if (num <= 1)
        return 0;

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }

    if (count == 2)
        return 1;
    else
        return 0;
}

int isArmstrong(int num)
{
    int original = num, digit, sum = 0;
    while (num > 0)
    {
        digit = num % 10;
        sum += digit * digit * digit;
        num = num / 10;
    }
    return (sum == original);
}

void fibonacci(int terms)
{
    int a = 0, b = 1, next,i;
    printf("Fibonacci Series: ");
    for (i = 1; i <= terms; i++)
    {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int reverse(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return rev;
}

int power(int base, int exponent)
{
    int result = 1,i;
    for (i = 1; i <= exponent; i++)
        result = result * base;
    return result;
}

int isPrime(int);
int isArmstrong(int);
void fibonacci(int);
int reverse(int);
int power(int, int);

int main()
{
    int choice, num, terms, base, exponent;
    clrscr();

    printf("1 : Prime Number\n");
    printf("2 : Check Armstrong Number\n");
    printf("3 : Fibonacci Series\n");
    printf("4 : Reverse a Number\n");
    printf("5 : Calculate x to the power y (x^y)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isPrime(num))
                printf("%d is a Prime Number.\n", num);
            else
                printf("%d is NOT a Prime Number.\n", num);
            break;

        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isArmstrong(num))
                printf("%d is an Armstrong Number.\n", num);
            else
                printf("%d is not an Armstrong Number.\n", num);
            break;

        case 3:
            printf("Enter number of terms: ");
            scanf("%d", &terms);
            fibonacci(terms);
            break;

        case 4:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Reversed Number: %d\n", reverse(num));
            break;

        case 5:
            printf("Enter base (x): ");
            scanf("%d", &base);
            printf("Enter exponent (y): ");
            scanf("%d", &exponent);
            printf("Result: %d\n", power(base, exponent));
            break;

        default:
            printf("Invalid Choice! Try again.\n");
    }

    getch();
    return 0;
}

int isPrime(int num)
{
    int count = 0;
    if (num <= 1)
        return 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }

    if (count == 2)
        return 1;
    else
        return 0;
}

int isArmstrong(int num)
{
    int original = num, digit, sum = 0;
    while (num > 0)
    {
        digit = num % 10;
        sum += digit * digit * digit;
        num = num / 10;
    }
    return (sum == original);
}

void fibonacci(int terms)
{
    int a = 0, b = 1, next;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= terms; i++)
    {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int reverse(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return rev;
}

int power(int base, int exponent)
{
    int result = 1;
    for (int i = 1; i <= exponent; i++)
        result = result * base;
    return result;
}