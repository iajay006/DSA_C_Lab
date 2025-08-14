#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 5

int top = -1;
int arr[MAX];

void push(int);
void pop();
void display();

int main() {
    int ch, num;
    clrscr();

    while (1) {
        printf("\n1 - Push");
        printf("\n2 - Pop");
        printf("\n3 - Display");
        printf("\n4 - Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("\nEnter element: ");
                scanf("%d", &num);
                push(num);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nWrong choice! Please enter correct choice\n");
        }
    }
    getch();
    return 0;
}

void push(int x) {
    if (top == MAX - 1) {
        printf("\nOverflow");
        return;
    }
    top++;
    arr[top] = x;
}

void pop() {
    int x;
    if (top == -1) {
        printf("\nUnderflow");
    } else {
        x = arr[top];
        top--;
        printf("\nThe popped element = %d\n", x);
    }
}

void display() {
    int i;
    if (top == -1) {
        printf("\nUnderflow");
    } else {
        for (i = top; i >= 0; i--) {
            printf("%d\t", arr[i]);
        }
        printf("\n");
    }
}