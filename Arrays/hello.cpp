#include <stdio.h>

int main() {
    int n, sum = 0;

    // Get user input for n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of squares
    for (int i = 1; i <= n; ++i) {
        sum += i * i;
    }

    // Print the result
    printf("Sum of the squares of natural numbers up to %d: %d\n", n, sum);

    return 0;
}
