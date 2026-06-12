#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    // Request integer input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 0, 1, and negative numbers are not prime numbers
    if (n <= 1) {
        isPrime = 0;
    } else {
        // Check loop limits up to the square root of n
        for (i = 2; i * i <= n; i++) {
            // If n is perfectly divisible by any number, it is not prime
            if (n % i == 0) {
                isPrime = 0;
                break; // Exit the loop immediately
            }
        }
    }

    // Output the conclusion
    if (isPrime == 1) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
