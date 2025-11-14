#include <stdio.h>

int main() {
    int n, factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Handle negative input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    // Handle factorial of 0
    else if (n == 0) {
        printf("Factorial of 0 is 1.\n");
    } 
    // Calculate factorial for positive numbers
    else {
        for (int i = 1; i <= n; i++) {
            factorial *= i; // factorial = factorial * i;
        }
        printf("Factorial of %d is %d.\n", n, factorial);
    }

    return 0;
}
