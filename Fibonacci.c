#include <stdio.h>

int main() {
    int n = 10; // Change this to the desired number of Fibonacci numbers
    int fibonacci[n];

    // Initialize the first two Fibonacci numbers
    int *ptr = fibonacci;
    *ptr = 0;
    ptr++;
    *ptr = 1;

    // Generate the Fibonacci sequence using direct memory access
    for (int i = 2; i < n; i++) {
        ptr++;
        *ptr = *(ptr - 1) + *(ptr - 2);
    }

    // Print the Fibonacci sequence
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci[i]);
    }

    printf("\n");

    return 0;
}
