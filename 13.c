#include <stdio.h>

void swap(int *x, int *y) {
    // Create a temporary variable to hold the value at address x
    int temp = *x;

    // Assign the value at address y to address x
    *x = *y;

    // Assign the original value of x (stored in temp) to address y
    *y = temp;
}

int main() {
    int num1, num2;

    printf("Enter First Numbers: ");
    scanf("%d", &num1);

    printf("Enter Second Numbers: ");
    scanf("%d",&num2);

    printf("\n\nBefore swapping: Number 1 is  = %d, Number 2 is = %d\n", num1, num2);

    // Call the swap function, passing the addresses of num1 and num2
    swap(&num1, &num2);

    printf("\nAfter swapping: Number 1 is = %d, Number 2 is = %d\n", num1, num2);

    return 0;
}

