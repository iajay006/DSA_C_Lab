#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAXSTK 10

struct stack {
    int top;
    int item[MAXSTK];
};

typedef struct stack S;

int isEmpty(S *st);
int isFull(S *st);
void push(S *st, int x);
void pop(S *st);
void display(S *st);

int main() {
    S st;
    int num, ch;
    clrscr();
    st.top = -1;

    while (1) {
        printf("\n1 - Push");
        printf("\n2 - Pop");
        printf("\n3 - Display");
        printf("\n4 - Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("\nEnter the element to be pushed: ");
                scanf("%d", &num);
                push(&st, num);
                break;
            case 2:
                pop(&st);
                break;
            case 3:
                display(&st);
                break;
            case 4:
                exit(0);
            default:
                printf("\nWrong choice, please enter correct choice\n");
        }
    }
    getch();
    return 0;
}

int isEmpty(S *st) {
    if (st->top == -1)
        return 1;
    else
        return 0;
}

int isFull(S *st) {
    if (st->top == MAXSTK - 1)
        return 1;
    else
        return 0;
}

void push(S *st, int x) {
    if (isFull(st)) {
        printf("\nOverflow");
        return;
    }
    st->top++;
    st->item[st->top] = x;
}

void pop(S *st) {
    if (isEmpty(st)) {
        printf("\nUnderflow");
    } else {
        printf("\nThe popped element is: %d", st->item[st->top]);
        st->top--;
    }
}

void display(S *st) {
    int i;
    if (isEmpty(st)) {
        printf("\nElements not present");
    } else {
        printf("\nThe elements of stack are:\n");
        for (i = st->top; i >= 0; i--) {
            printf("%d\n", st->item[i]);
        }
    }
}