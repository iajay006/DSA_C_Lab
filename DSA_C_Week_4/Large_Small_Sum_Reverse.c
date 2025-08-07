#include <stdio.h>
#include <conio.h>

#define SIZE 100

void main() {
    int arr[SIZE], n;
    int i, max, min, sum = 0;
    
    clrscr();  // Clear screen (Turbo C specific)

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0 || n > SIZE) {
        printf("Invalid array size!");
        getch();
        return;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with first element
    max = min = arr[0];

    // Find max, min, and sum
    for (i = 0; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
        sum += arr[i];
    }

    // Display results
    printf("\nLargest element = %d", max);
    printf("\nSmallest element = %d", min);
    printf("\nSum of elements = %d", sum);

    // Reverse the array
    printf("\nArray in reverse order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    getch();  // Wait for key press (Turbo C specific)
}
